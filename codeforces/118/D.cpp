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
#define mod 100000000
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
int N1 , N2 , K1 , K2 ;
bigint dp[101][101][11][11] ;
bigint solve( int foot , int horse , int k1 , int k2 ){
    if( foot + horse == 0 )
        return 1 ;
    bigint ans = 0 ;
    if( dp[foot][horse][k1][k2] != -1 )
        return dp[foot][horse][k1][k2]  ;
    if( foot > 0 && k1 > 0 )
        (ans += solve(foot-1, horse, k1-1, K2)) %= mod ;
    if( horse > 0 && k2 > 0 )
        (ans += solve( foot , horse - 1 ,K1 , k2-1)) %= mod ;
    return dp[foot][horse][k1][k2] = ans ;
}
 
int main(){
    FAST() ;
    cin >> N1 >> N2 >> K1 >> K2 ;
    memset( dp, -1, sizeof(dp) ) ;
   
    cout << solve(N1, N2, K1, K2 ) << endl ;
    return 0 ;
}
