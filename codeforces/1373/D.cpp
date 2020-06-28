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
#define MOD 1000000007
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
bigint maxSum( vll &v ){
    int N = (int) v.size() ;
    bigint max_sum = 0 , ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        max_sum = max( max_sum + v[i] , v[i] ) ;
        ans = max( ans , max_sum ) ;
    }
    return ans ;
}
int main(){
    FAST() ;
    int T ; cin >> T ;
    while( T-- ){
    int N ; cin >> N ;
    bigint arr[N] , sum = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
        if( i % 2 == 0 )
            sum += arr[i] ;
    }
    vll v1 , v2 ;
    for( int i = 1 ; i < N ; i += 2 ){
        v1.push_back(arr[i] - arr[i-1]) ;
    }
    for( int i = 2 ; i < N ; i += 2 ){
        v2.push_back(arr[i-1] - arr[i] ) ;
    }
    bigint ans1 = maxSum(v1) , ans2 = maxSum(v2) ;
    cout << sum + max( ans1 , ans2 ) << endl ;
    }
    return 0 ;
}
