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
int bribe[100001] ;
bool visited[100001] ;
int minimumBribe ;
void dfs( int node , vi adj[] ){
    visited[node] = 1 ;
    minimumBribe = min( minimumBribe , bribe[node] ) ;
    for( int child : adj[node] ){
        if( visited[child] == 0 ){
            dfs(child, adj) ;
        }
    }
    
}
int main(){
    FAST();
    vi adj[100001] ;
    int N , M ; cin >> N >> M  ;
    for( int i = 1 ; i <= N ; i++ ){
        cin >> bribe[i] ;
    }
    for( int i = 0 ; i < M ; i++ ){
        int a , b ; cin >> a >> b ;
        adj[a].push_back(b) ; adj[b].push_back(a) ;
    }
    bigint ans = 0 ;
    for( int i = 1 ; i <= N ; i++ ){
        if( visited[i] == 0 ){
            minimumBribe = bribe[i] ;
            dfs(i, adj) ;
            ans += ( bigint )minimumBribe ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
