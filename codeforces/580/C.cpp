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
int ans , K ;
bool visited[100001] , cats[100001] ;

void dfs( int node , vi adj[] , int max_consecutive_cats , int local_cats){
    visited[node] = 1 ;

//    cout << "NODE# " << node << endl ;
    if( adj[node].size() == 1 && node != 1){
//        cout << " node " << node << endl << endl ;
        if( cats[node] == 1 ){
            local_cats ++ ;
        }
        max_consecutive_cats = max ( local_cats , max_consecutive_cats ) ;
        if( max_consecutive_cats <= K )
            ans++ ;
    }
    else{
    if( cats[node] == 1 ){
        local_cats ++ ;
    }
    if( cats[node] == 0 ){
        local_cats = 0 ;
    }
    max_consecutive_cats = max ( local_cats , max_consecutive_cats ) ;
 }
//    cout << "   local cats " << local_cats << " max_consewcutive_cats " << max_consecutive_cats << endl ;
    for( int child : adj[node] ){
        if( visited[child] == 0 ){
            dfs( child, adj, max_consecutive_cats, local_cats ) ;
        }
    }
    
    
}

int main(){
    FAST();
    int N ; cin >> N >> K ;
    vi adj[100001] ;
    for( int i = 1 ; i <= N ; i++ ){
        cin >> cats[i] ;
    }
    for( int i = 0 ; i < N - 1 ; i++ ){
        int a , b ; cin >> a >> b ;
        adj[a].push_back(b) ; adj[b].push_back(a) ;
    }
//    for( int i = 1 ; i <= N ; i++ ){
//        for( int j = 1 ; j < adj[i].size() ; j++ ){
//            cout << adj[i][j] << "  " ;
//        }
//        cout << endl ;
//    }
//    cout << endl << endl ;
    memset( visited , 0 , sizeof(visited )) ;
    dfs( 1,adj,0,0 ) ;
    cout << ans << endl ;
    return 0 ;
}
