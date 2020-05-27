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
    int T ; cin >> T ;
    while( T-- ){
    int N ; cin >> N ;
    bigint arr[N] ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    if( N == 1 ){
        cout << arr[0] << endl ;
        continue ;
    }
    vll ans ;
    bigint A = arr[0] , B = arr[0] ;
    for( int i = 1 ; i < N ; i++ ){
        if( A * arr[i] > 0 )
            B = max( B , arr[i] ) ;
        else{
            ans.push_back(B) ;
            A = arr[i] ; B = arr[i] ;
        }
    }
        if( arr[N-1] * arr[N-2] > 0 ){
            ans.push_back(B) ;
        }
        else
            ans.push_back(arr[N-1]) ;
        bigint sum = 0 ;
        for( auto x : ans )
            sum += x ;
        cout << sum << endl ;
}
    return 0 ;
}
