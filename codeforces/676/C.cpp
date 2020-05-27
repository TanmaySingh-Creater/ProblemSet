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

bool isPossible( string str , int K , int N , int op ){
    int a = 0 , b = 0 ;
    // for string aaa...
    for( int i = 0 ; i < K ; i++ ){
        if( str[i] == 'b' )
            b++ ;
    }
    if( b <= op )
        return true ;
    for( int i = K ; i < N ; i++ ){
        if( str[i] == 'b' )
            b++ ;
        if( str[i-K] == 'b' )
            b-- ;
        if( b <= op )
            return true ;
    }
    // for string bbb...
    for( int i = 0 ; i < K ; i++ ){
        if( str[i] == 'a' )
            a++ ;
    }
    if( a <= op )
        return true ;
    for( int i = K ; i < N ; i++ ){
        if( str[i] == 'a' )
            a++ ;
        if( str[i-K] == 'a' )
            a-- ;
        if( a <= op )
            return true ;
    }
    return false ;
}

int main(){
    FAST() ;
    int N , K ; cin >> N >> K ;
    string str ; cin >> str ;
    int L = 1 , R = N ;
    int ans = 1 ;
    while( L <= R ){
        int mid = L + ( R - L ) / 2 ;
        if( isPossible(str , mid , N , K ) ){
            ans = max( ans , mid ) ;
            L = mid + 1 ;
        }
        else
            R = mid - 1 ;
    }
    cout << ans << endl ;
    return 0 ;
}
