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
vll v ;
void makeVector(){
    v.push_back(1) ;
    for( int i = 2 ; i <= 100005 ; i++ ){
        v.push_back(i + v[i-2]) ;
    }
}
int main(){
    FAST() ;
    makeVector() ;
    int T ; cin >> T ;
    while( T-- ){
    int N , K ; cin >> N >> K ;
    string ans ;
    for( int i = 0 ; i < N ; i++ )
        ans += 'a' ;
    bigint idx = lower_bound(v.begin(), v.end(), K ) - v.begin() + 1 ;
    ans[N-idx-1] = ans[v[idx-1]-K+N-idx] = 'b' ;
    cout << ans << endl ;
    }
    return 0 ;
}
