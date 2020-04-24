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
const bigint mod = 1000000009 ;
int main(){
    FAST();
    int T ; cin >> T ;
    while( T-- ){
    vi arr[5001] ;
    int N ; cin >> N ;
    for( int i = 0 ; i < N ; i++ ){
        int x ; cin >> x ;
        arr[x].push_back(i) ;
    }
    bool flag = false ;
    for( int i = 1 ; i <= 5000 ; i++ ){
        if( arr[i].size() > 2 ) {
            flag = true ;
            break ;
        }
        if( arr[i].size() == 2 && arr[i][1] - arr[i][0] > 1 ){
            flag = true ;
            break ;
        }
    }
    if( flag == true ){
        cout <<"YES" << endl ;
    }
    else
        cout << "NO" << endl ;
    }
    return 0 ;
}