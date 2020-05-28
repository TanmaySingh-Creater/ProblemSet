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

int main(){
    FAST() ;
    int T ; cin >> T ;
    while( T-- ){
    int N , K ; cin >> N >> K ;
    int ans = 1 ;
    for( int i = 1 ; i * i <= N ; i++ ){
        if( N % i == 0 ){
            if( N % i == i ){
                if( i <= K )
                    ans = max( ans , i ) ;
            }
            else{
                int d1 = N / i , d2 = i ;
                if( d1 <= K )
                    ans = max( ans , d1 ) ;
                if( d2 <= K )
                    ans = max( ans , d2 ) ;
            }
        }
    }
    cout << N / ans << endl ;
    }
    return 0 ;
}
