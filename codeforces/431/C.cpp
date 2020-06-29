//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright Â© 2020 Tanmay Singh. All rights reserved.
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
#define mod 1000000007
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
bigint dp[1000][2] ;
bigint kTree( int sum , int flag ,int N , int K , int D ){
    if( sum == N && flag == 1 )
        return 1 ;
    if( sum == N && flag == 0 )
        return 0 ;
    if( sum > N )
        return 0 ;
    if( dp[sum][flag] != -1 )
        return dp[sum][flag] ;
    bigint ans = 0 ;
    for( int i = 1 ; i <= K ; i++ ){
        if( i < D && flag == 1 )
           (ans += kTree(sum + i , 1, N, K , D)) %= mod ;
        if( i < D && flag == 0 )
           (ans += kTree(sum + i, 0, N, K, D)) %= mod ;
        if( i >= D )
           (ans += kTree(sum + i, 1, N, K, D)) %= mod ;
    }
    return dp[sum][flag] = ans % mod ;
}
int main(){
    FAST() ;
    memset(dp, -1, sizeof(dp) ) ;
    int N , K , D ; cin >> N >> K >> D ;
    bigint ans = kTree( 0 , 0 , N , K , D ) ;
    cout << ans << endl ;
    return 0 ;
}
