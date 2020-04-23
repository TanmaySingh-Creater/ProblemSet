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
double ans ;
bool visited[100001] ;
 vi adj[100001] ;
void dfs( int node , bigint sibilings , int depth  , double probability ){
    visited[node] = 1 ;
    if( adj[node].size() == 1 && node != 1 ){
        ans = ans + ( double )depth * ( probability ) ;
    }
    for( int child : adj[node] ){
        if( visited[child] == 0 ){
            if( node == 1  ){
            dfs(child, adj[node].size(), depth + 1 , probability / (adj[node].size()) ) ;
            }
            else
            dfs(child, adj[node].size(), depth + 1 , probability / (adj[node].size() - 1 ) ) ;
        }
    }
}
int main(){
    FAST();
    int N ; cin >> N ;
    for( int i = 0 ; i < N - 1 ; i++ ){
        int a , b ; cin >> a >> b ;
        adj[a].push_back(b) ; adj[b].push_back(a) ;
    }
    dfs(1, 0, 0, 1.0) ;
    cout << fixed << setprecision(10) <<  ans << endl ;
    return 0 ;
}
