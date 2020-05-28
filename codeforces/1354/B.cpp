//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("1avx2")
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
#include <fstream>
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

using namespace std ;

int main(){
    FAST() ;
    int T ; cin >> T ;
    while( T-- ){
    string str ; cin >> str ;
    int N = ( int ) str.size() ;
    vi ch , freq ;
    int cnt = 1 ;
    for( int i = 1 ; i < N ; i++ ){
        if( str[i] == str[i-1] )
            cnt++ ;
        else if( cnt >= 1 ){
            ch.push_back(str[i-1]-'0') ;
            freq.push_back(cnt) ;
            cnt = 1 ;
        }
    }
    ch.push_back(str[N-1]-'0') ;
    freq.push_back(cnt) ;
    int ans = INT_MAX ;
    for( int i = 1 ; i < freq.size() - 1 ; i++ ){
        int possibleAns = freq[i] + 2 ;
        set<int> s ; s.insert(ch[i-1]) ; s.insert(ch[i]) ; s.insert(ch[i+1]) ;
        if( s.size() == 3 )
            ans = min( ans , possibleAns ) ;
    }
    if( ans != INT_MAX )
        cout << ans << endl ;
    else
        cout << "0" << endl ;
    }
    return 0 ;
}
