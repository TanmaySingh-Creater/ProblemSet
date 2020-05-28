//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("avx2")
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
#define mod 1000000009
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
 
using namespace std;

int main(){
    FAST() ;
    int N ; cin >> N ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    int dp4[N] , dp8[N] , dp15[N] , dp16[N] , dp23[N] , dp42[N] ; // use 2d matrix to avoid complication
    memset(dp4, 0, sizeof(dp4)) ;
    if( arr[0] == 4 )
        dp4[0] = 1 ;
    for( int i = 1 ; i < N ; i++ ){
        dp4[i] = dp4[i-1] ;
        if(arr[i] == 4 )
            dp4[i]++ ;
    }
    memset(dp8, 0, sizeof(dp8)) ;
    for( int i = 1 ; i < N ; i++ ){
        dp8[i] = dp8[i-1] ;
        if( arr[i] == 8 && dp8[i] < dp4[i] )
            dp8[i]++ ;
    }
    memset(dp15, 0, sizeof(dp15)) ;
       for( int i = 1 ; i < N ; i++ ){
           dp15[i] = dp15[i-1] ;
           if( arr[i] == 15 && dp15[i] < dp8[i] )
               dp15[i]++ ;
       }
    memset(dp16, 0, sizeof(dp16)) ;
       for( int i = 1 ; i < N ; i++ ){
           dp16[i] = dp16[i-1] ;
           if( arr[i] == 16 && dp16[i] < dp15[i] )
               dp16[i]++ ;
       }
    memset(dp23, 0, sizeof(dp23)) ;
       for( int i = 1 ; i < N ; i++ ){
           dp23[i] = dp23[i-1] ;
           if( arr[i] == 23 && dp23[i] < dp16[i] )
               dp23[i]++ ;
       }
    memset(dp42, 0, sizeof(dp42)) ;
          for( int i = 1 ; i < N ; i++ ){
              dp42[i] = dp42[i-1] ;
              if( arr[i] == 42 && dp42[i] < dp23[i] )
                  dp42[i]++ ;
          }
    cout << N - dp42[N-1] * 6 << endl ;
    return 0 ;
}

//4 42 23 23 8 42 16 23 42 16 42 8 4 23 4 4 23 42 16 42 23 23 23 42 4 42 8 8 16 23 15 23 16 4 42 15 15 23 16 15 16 4 4 15 23 42 42 15 8 23 8 23 4 15 16 15 42 8 23 16 15 42 23 8 4 16 15 16 23 16 16 4 23 16 8 23 16 15 23 4 4 8 15 4 4 15 8 23 23 4 4 8 8 4 42 15 4 4 42 16
