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

vi adj[1000001] , res;
bool visited[1000001] ;
int temperature[1000001] ;
int dfs( int node , int sum ){
    visited[node] = 1 ;
    int sumTillNode = temperature[node] ;
    for ( int child : adj[node] ){
        if( visited[child] == 0 ){
            sumTillNode += dfs(child , sum) ;
        }
    }
    if( sumTillNode == sum / 3 ){
        res.push_back(node) ;
        return 0 ;
    }
    return sumTillNode ;
}
int main(){
    FAST();
    int N ; cin >> N ;
    int sum = 0 ;
    int root = 0 ;
    for( int i = 1 ; i <= N ; i++ ){
        int a ; cin >> a >> temperature[i] ;
        if( a != 0 ){
            adj[i].push_back(a) ; adj[a].push_back(i) ;
        }
        else{
            root = i ;
        }
        sum += temperature[i] ;
    }
    if( sum % 3 != 0 ){
        cout << "-1" << endl ;
        return 0 ;
    }
    dfs(root , sum ) ;
    if( res.size() < 2 ){
        cout << "-1" << endl ;
        return 0 ;
    }
    if( res[0] == root || res[1] == root ){
        cout << "-1" << endl ;
        return 0 ;
    }
    cout << res[0] << " " << res[1] << endl ;
    return 0 ;
}
