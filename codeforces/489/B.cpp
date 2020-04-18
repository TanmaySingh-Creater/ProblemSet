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
const int mod = 1000000007 ;

int main(){
    FAST();
    int N ; cin >> N ;
    int boys[N] ;
    for( int i = 0 ; i <
        N ; i++ ){
        cin >> boys[i] ;
    }
    int M ; cin >> M ;
    int girls[M] ;
    for( int i = 0 ; i < M ; i++ ){
        cin >> girls[i] ;
    }
    sort( boys , boys + N ) ; sort( girls , girls + M ) ;
    int ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        for( int j = 0 ; j < M ; j++ ){
            if( abs( boys[i] - girls[j]) < 2 ){
                ans ++ ;
                girls[j] = INT_MAX ;
                break ;
            }
        }
    }
    cout << ans << endl ;
    return 0 ;
}
