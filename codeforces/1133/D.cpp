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
int main(){
    FAST();
    int N ; cin >> N ;
    long double arr[N] , brr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    for( int i = 0 ; i < N ; i++ ){
        cin >> brr[i] ;
    }
    map<long double , int> m ;
    int ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if( arr[i] != 0 ){
            m[-brr[i]/arr[i]]++ ;
        }
        if( arr[i] == 0 && brr[i] == 0 ){
            ans ++ ;
        }
    }
    int res = 0 ;
    for( auto x : m ){
        res = max( x.second , res ) ;
    }
    cout << ans + res << endl ;
    return 0 ;
    
}