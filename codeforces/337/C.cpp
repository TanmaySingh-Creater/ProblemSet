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
const bigint mod = 1000000009 ;
bigint binaryExponentiation( bigint a , bigint base ){
    bigint res = 1 ; a %= mod ;
    while( base ){
        if( base & 1 )
            res = ( res % mod * a % mod ) % mod ;
        a = ( a % mod * a % mod ) % mod ;
        base >>= 1 ;
    }
    return res ;
}
int main(){
    FAST();
    bigint N , M , K ; cin >> N >> M >> K ;
    bigint maxQuestions = (N / K) *( K - 1 ) + N % K ;
    if( M <= maxQuestions ){
        cout << M % mod << endl ;
        return 0 ;
    }
    bigint groups = N / K ;
    bigint kitneGroupsUthaoge = M - maxQuestions ;
    bigint bachaMaal = N % K + (groups - kitneGroupsUthaoge) * ( K - 1 ) ;
    bigint ans = 0 ;
//    for( int i = 0 ; i < kitneGroupsUthaoge ; i++ ){
//        ans =  (2 * (ans % mod + K ) % mod ) % mod;
////        cout << ans << "  " ;
//    }
    ans = (( binaryExponentiation(2, kitneGroupsUthaoge + 1 )  - 2 + mod ) % mod * K % mod ) % mod;
    cout << (ans % mod  + bachaMaal % mod ) % mod  << endl ;
    return 0 ;
}
