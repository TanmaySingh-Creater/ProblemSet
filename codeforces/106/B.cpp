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
    set <int> s ;
    int N ; cin >> N ;
    int arr[N][4] ;
    for( int i = 0 ; i < N ; i++ ){
         cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3] ;
    }
    for( int i = 0 ; i < N ; i++ ){
        for( int j = 0 ; j < N ; j++ ){
            if( arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1] && arr[i][2] < arr[j][2] && i != j){
                s.insert( i ) ;
            }
        }
    }
    int ma = INT_MAX , pos ;
    for( int i = 0 ; i < N ; i++ ){
        if( s.find(i) == s.end() ){
            if( arr[i][3] < ma ){
                pos = i + 1 ;
                ma = arr[i][3] ;
            }
        }
    }
    cout << pos << endl ;
    return 0 ;
}

