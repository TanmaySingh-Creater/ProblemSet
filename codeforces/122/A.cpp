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
vi v ;
void luckyNumber( int N ){
    if( N > 1001 )
        return ;
    v.push_back(N) ;
    luckyNumber(N * 10 + 4 ) ;
    luckyNumber(N * 10 + 7 ) ;
}
int main(){
    luckyNumber(4) ;
    luckyNumber(7) ;
    sort( v.begin() , v.end() ) ;
    int N ; cin >> N ;
    bool ans = false ;
    for( auto x : v ) {
        if( N % x == 0 ){
            ans = true ;
            break ;
        }
    }
    if( ans )
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;
    return 0;
}
