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
#define MAX 1000000
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;

using namespace std ;

int main(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    FAST();
    int N ; cin >> N ;
    vector< pair <int , int > > v ;
    for( int i = 0 ; i < N ; i++ ){
        int h , g ; cin >> h >> g ;
        v.push_back( make_pair( h, g ) ) ;
    }int count = 0 ;
    for( int i = 0 ; i < v.size() ; i++ ){
        for( int j = 0 ; j < v.size() ; j++ ){
            if( v[i].second == v[j].first && i != j ){
                count ++ ;
            }
        }
    }
    cout << count << endl ;
    return 0 ;
}

