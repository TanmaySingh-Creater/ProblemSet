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

bool visited[200001] ;
int pos[200001] ;
vector<int>* bfs ( int node , vi adj[] ){
    queue<int> q ;
    vector<int> * v = new vector<int> () ;
    v->push_back(node) ;
    visited[node] = 1 ;
    q.push(node) ;
    while( !q.empty() ){
        int curr_node = q.front() ; q.pop() ;
        for( int neighbour : adj[curr_node] ){
            if( visited[neighbour] == 0 ){
                visited[neighbour] = 1 ;
                v->push_back(neighbour) ;
                q.push(neighbour) ;
            }
        }
    }
    return v ;
}
bool cmp( int a , int b ){
    return pos[a] < pos[b] ;
}
int main(){
    FAST();
    int N ; cin >> N ;
    vi adj[200001] ;
    for( int i = 0 ; i < N - 1 ; i++ ){
        int a , b ; cin >> a >> b ;
        adj[a].push_back(b) ; adj[b].push_back(a) ;
    }
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
        pos[arr[i]] = i ;
    }
    memset( visited, 0 , sizeof(visited) ) ;
    for( int i = 1 ; i <= N ; i++ ){
        sort( adj[i].begin() , adj[i].end() , cmp ) ;
    }
    memset( visited, 0, sizeof(visited) ) ;

    vector<int>* v = bfs(1, adj) ;
    bool flag = true ;
    for( int i = 0 ; i < N ; i++ ){
        if( v->at(i) != arr[i] ){
            flag = false ;
            break ;
        }
    }
    if( flag == true )
        cout << "Yes" << endl ;
    else
        cout << "No" << endl ;
    return 0 ;
}
