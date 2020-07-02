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
#define mod 998244353
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
bigint suffix[300005] ;
int main(){
    int N , M ; cin >> N >> M ;
    string A , B ; cin >> A >> B ;
    reverse(A.begin(), A.end()) ; reverse(B.begin(), B.end()) ;
    if( A[0] == '1' )
        suffix[0] = 1 ;
    bigint two = 2 ;
    for( int i = 1 ; i < 300005 ; i++ ){
        suffix[i] = suffix[i-1] % mod ;
        if( i >= N )
            continue ;
        if( A[i] == '1' ){
            suffix[i] = two + suffix[i-1] ;
            suffix[i] %= mod ;
        }
        two *= 2 ;
        two %= mod ;
    }
    bigint ans = 0 ;
    for( int i = 0 ; i < M ; i++ ){
        if( B[i] == '1' )
            ans = (ans % mod + suffix[i] % mod) % mod ;
    }
    cout << ans << endl ;
    return 0 ;
}

