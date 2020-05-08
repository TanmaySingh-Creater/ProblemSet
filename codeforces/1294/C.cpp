//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("1avx2")
#pragma GCC optimization ("O3")
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
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <climits>
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
#define mod 1000000007
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;

using namespace std ;

map<bigint , bigint> m ;

void factorization(bigint N ){
    
    for( int i = 2 ; i * i <= N ; i++ ){
        while( N % i == 0 ){
            m[i]++ ;
            N /= i ;
        }
    }
    if( N > 1 )
        m[N]++ ;
}

int main(){
    int T ; cin >> T ;
    while( T-- ){
        m.clear() ;
        bigint X ; cin >> X ;
        factorization(X) ;
        if( m.size() >= 3 ){
            auto itr = m.begin() ;
            bigint a = pow(itr->first , itr->second ) ;
            itr++ ;
            bigint b = pow(itr->first , itr->second ) ;
            bigint c = X / ( a * b ) ;
            cout << "YES" << endl ;
            cout << a << " " << b << " " << c << endl ;
        }
        else if( m.size() == 1){
            auto itr = m.begin() ;
            if( itr->second > 5 ){
                cout << "YES" << endl ;
                cout << itr->first << " " << ( ( itr->first  * itr->first ) ) << " " << X / ( itr->first * itr->first * itr->first ) << endl ;
            }
            else
                cout << "NO" << endl ;
        }
            else if ( m.size() == 2 ){
                auto itr = m.begin() ;
                bigint a = itr->first ;
                itr++ ;
                bigint b = itr->first ;
                bigint c = X / ( a * b ) ;
                if( c != a && c != b && c != 1 ){
                    cout << "YES" << endl ;
                    cout << a << " " << b << " " << c << endl ;
                }
                else
                    cout << "NO" << endl ;
            }
            else
                cout << "NO" << endl ;
        }
    }





