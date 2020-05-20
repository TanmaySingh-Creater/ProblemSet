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
#define mod 1000000007
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;

using namespace std;
int spf[1000001] ;
void makeSieve(){
    for( int i = 1 ; i < 1000001 ; i++ )
        spf[i] = i ;
    for( int i = 2 ; i * i < 1000001 ; i++ ){
        if( spf[i] == i )
            for( int j = i * i ; j < 1000001 ; j += i )
                spf[j] = min( i , spf[j] ) ;
    }
}
int main(){
    FAST() ;
    makeSieve() ;
    vi ans ;
    int N ; cin >> N ;
    ans.push_back(N) ;
    while( N != 1 ){
        ans.push_back(N / spf[N] ) ;
        N /= spf[N] ;
    }
    for( auto x : ans )
        cout << x << " " ;
    cout << endl ;
    return 0 ;
}
