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
#define mod 1000003
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;

using namespace std;

int main(){
    FAST() ;
    int N , K ; cin >> N >> K ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    if( N == 1 ){
        cout << K - arr[0] << endl ;
        return 0 ;
    }
    bigint ans = 0 ;
    while( arr[0] != K ){
        for( int i = 1 ; i < N ; i++ ){
            if( arr[i] != arr[i-1] ){
                arr[i-1]++ ;
            }
            if( i == N - 1 )
                arr[N-1] ++ ;
        }
        ans++ ;
    }
    cout << ans << endl ;
    return 0 ;
}
