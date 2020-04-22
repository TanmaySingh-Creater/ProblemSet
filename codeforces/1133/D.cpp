//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")

#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <ratio>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;

using namespace std ;
int gcd( int a , int b ){
    if( b == 0 ){
        return a ;
    }
    return gcd( b , a % b ) ;
}
int main(){
    FAST();
    int N ; cin >> N ;
    double arr[N] , brr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    for( int i = 0 ; i < N ; i++ ){
        cin >> brr[i] ;
    }
    map<pair<int , int> , int> m ;
    int ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if( arr[i] == 0 && brr[i] == 0 ){
           ans++ ;
           continue ;
        }
        if( arr[i] == 0 )
            continue ;
        int a = arr[i] , b = brr[i] ;
        int G = gcd(abs( arr[i]) ,abs( brr[i] )) ;
        a /= G ; b /= G ;
        if( a < 0 && b < 0 ){
            m[{ b , -a }]++ ;
        }
       else if( a > 0 && b > 0 ){
            m[{ -b , a  }]++ ;
        }
       else if ( a > 0 && b < 0 ){
           m[{ -b , a }]++ ;
       }
       else if( a < 0 && b > 0 ){
           m[{ b , -a }]++ ;
       }
        if( brr[i] == 0 ){
            
            if( a < 0 ){
                m[{ 0 , -a }]++ ;
            }
            else if( a > 0 ){
                m[{ 0 , a }]++ ;
            }
        }
    }
    int res = 0 ;
    for( auto x : m ){
        res = max( res , x.second ) ;
    }
    cout << res + ans << endl ;
    return 0 ;
}
