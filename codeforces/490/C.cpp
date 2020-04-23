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

bigint binaryExponentiation( bigint a , bigint base , bigint K ){
    bigint res = 1 ;
    while( base  ){
        if( base & 1 )
            res = ( res % K * a % K ) % K ;
        a = ( a % K * a % K ) % K ;
        base >>= 1 ;
    }
    return res ;
}
int main(){
    FAST();
    string str ; cin >> str ;
    int N , M ; cin >> N >> M ;
    bigint rem = 0 ;
    vll prefix ;
    for( bigint i = 0 ; i < str.size() ; i++ ){
        rem =  (rem * 10 + str[i] - 48) % N ;
        prefix.push_back(rem) ;
    }
    rem = 0 ;
    int L = 0 ;
    vll suffix ;
    for( bigint i = str.size() - 1 ; i >= 0 ; i-- ){
        rem = ((str[i] - 48) * binaryExponentiation(10, L, M) + rem) % M ;
        suffix.push_back(rem) ;
        L++ ;
    }
    reverse(suffix.begin(), suffix.end()) ;
    for( int i = 0 ; i < prefix.size() - 1 ; i++ ){
        if( prefix[i] == 0 && suffix[i+1] == 0 && str[i+1] != '0' ){
            cout << "YES" << endl ;
            cout << str.substr( 0 , i + 1 ) << endl << str.substr( i + 1 , str.size() ) ;
            return 0 ;
        }
    }
    cout << "NO" << endl ;
    return 0 ;
}
