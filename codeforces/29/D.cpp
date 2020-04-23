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
int RANK[301] ;
bool visited[301] ;
vi adj[301] , path ;
bool cmp( int a , int b ){
    return RANK[a] < RANK[b] ;
}
int rankGenerator( int node ){
    visited[node] = 1 ;
    if( adj[node].size() == 1 && node != 1 ){
        return RANK[node] ;
    }
    for( int child : adj[node] ){
        if( visited[child] == 0 ){
            RANK[node] = min( RANK[node] , rankGenerator(child) ) ;
        }
    }
    return RANK[node] ;
}
void dfs( int node ){
    visited[node] = 1 ;
    path.push_back(node) ;
    for( int child : adj[node] ){
        if( visited[child] == 0 ){
            dfs(child) ;
            path.push_back(node) ;
        }
    }
}
bool isSubsequence( vi leaf ){
    int j = 0 ;
    for( int i = 0 ; i < path.size() && j < leaf.size() ; i++ ){
        if( leaf[j] == path[i] )
            j++ ;
    }
    if( j == leaf.size() ){
        return true ;
    }
    return false ;
}
int main(){
    FAST();
    int N ; cin >> N ;
    for( int i = 0 ; i < N - 1; i++ ){
        int a , b ; cin >> a >> b ;
        adj[a].push_back( b ) ; adj[b].push_back( a ) ;
    }
    int L = 0 , k = 0  ;
    for( int i = 2 ; i <= N ; i++ ){
        if( adj[i].size() == 1 )
            L++ ;
    }
    for( int i = 1 ; i <= N ; i++ ){
        RANK[i] = i ;
    }
    vi leaf ;
    for( int i = 0 ; i < L ; i++ ){
        int a ; cin >> a ;
        leaf.push_back(a) ;
        RANK[a] = INT_MIN + k ;
        k++ ;
    }
    rankGenerator(1) ;
    memset( visited, 0, sizeof(visited) ) ;
    for( int i = 1 ; i <= N ; i++ ){
        sort( adj[i].begin() , adj[i].end() , cmp ) ;
    }
    dfs( 1 ) ;
    if( isSubsequence( leaf ) ) {
        for( auto x : path ){
            cout << x << " " ;
        }
        cout << endl ;
    }
    else
        cout << "-1" << endl ;
    return 0 ;
}
