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

//void dfs (int node ,  vi arr[] , bool visted[] , int distance , int dist[] ){
//
//}

int main(){
    FAST();
    vll v ;
    for( int i = 0 ; i < 32 ; i++ ){
        v.push_back(pow( 2 , i ) - 1 ) ;
    }
    int T ; cin >> T ;
    while( T-- ){
    bigint N ; cin >> N ;
    bigint arr[N] ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    bigint ma = arr[0] ;
    bigint ans = 0 ;
    for( int i = 1 ; i < N ; i++ ){
        if( arr[i] < ma ){
            bigint smallans = lower_bound(v.begin(), v.end() , ma - arr[i]) - v.begin() ;
            ans = max ( ans , smallans ) ;
        }
        else
            ma = arr[i] ;
    }
    cout << ans << endl ;
    }
    return 0 ;
}
