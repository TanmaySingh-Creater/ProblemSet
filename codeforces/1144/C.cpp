//
//  CPlibrary
//
//  Created by Tanmay Singh on 21/12/19.
//  Copyright © 2019 Tanmay Singh. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>
#include <string>
#include <stack>
#include <deque>
#include <unordered_set>
#include <unordered_map>
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;

using namespace std ;

int main(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    FAST();
    int N , x ; cin >> N ;
    int count[200001] = { 0 } ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> x ;
        count[x] ++ ;
    }
    for( int i = 0 ; i < 200001 ; i++ ){
        if( count[i] > 2 ){
            cout << "NO" << endl ;
            return 0 ;
        }
    }
    cout << "YES" << endl ;
    vector <int> increasing , decreasing ;
    for( int i = 0 ; i < 200001 ; i++ ){
        if( count[i] > 0 ){
            increasing.push_back(i) ;
            count[i] -- ;
        }
    }
    for( int i = 200000 ; i >= 0 ; i-- ){
        if( count[i] > 0 ){
            decreasing.push_back(i) ;
            count[i] -- ;
        }
    }
    cout << increasing.size() << endl ;
    for( auto x : increasing ){
        cout << x <<" " ;
    }
    cout << endl ;
    cout << decreasing.size() << endl ;
    for( auto x : decreasing ){
        cout << x <<" " ;
    }
        cout << endl ;
    
    
    return 0 ;
}


