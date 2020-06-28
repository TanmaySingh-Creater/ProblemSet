//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright Â© 2020 Tanmay Singh. All rights reserved.
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
#define MOD 1000000007
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
bigint dist[300001] ;int par[300001] ;
bool visited[300001] ;
vector<pair<int , int>> adj[300001] ;
bool dijkstra( int src , int K ){
    dist[src] = 0 ;
    priority_queue<pair<bigint , int> , vector<pair<bigint , int>> , greater<pair<bigint, int>> > pq ;
    pq.push({ 0 , src }) ;
    while( !pq.empty() ){
        pair<int , int> currNode = pq.top() ;
        pq.pop() ;
        int D = currNode.first , u = currNode.second ;
        if( u == K )
            return true ;
        if( visited[u] )
            continue ;
        visited[u] = true ;
        for( auto v : adj[u] ){
            if( dist[v.first] > D + v.second && !visited[v.first] ){
                pq.push({ dist[v.first] = D + v.second , v.first }) ;
                par[v.first] = u ;
            }
        }
    }
    return false ;
}
int main(){
    FAST() ;
    memset(par, -1, sizeof(par)) ;
    int N , M ; cin >> N >> M ;
    for( int i = 0 ; i < M ; i++ ){
        int x , y , w ; cin >> x >> y >> w ;
        adj[x].push_back({y,w}) ;
        adj[y].push_back({x,w}) ;
    }
    for( int i = 1 ; i <= N ; i++ )
        dist[i] = 1e13 ;
    if( dijkstra( 1 , N )){
        vi path ;
        int curr = N ;
        while( curr != -1 ){
            path.push_back(curr) ;
            curr = par[curr] ;
        }
        reverse(path.begin(), path.end()) ;
        for( auto x : path )
            cout << x << " " ;
    }
    else
        cout << "-1" << endl ;
    return 0 ;
}
