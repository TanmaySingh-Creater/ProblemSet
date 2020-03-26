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
    int N  ; cin >> N ;
    int arr[N] ;
    
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    int chest = 0 , biceps = 0 , back = 0 ;
    for( int i = 0 ; i < N ; i += 3 ){
        chest += arr[i] ;
    }
    for( int i = 1 ; i < N ; i += 3 ){
        biceps += arr[i] ;
    }
    for( int i = 2 ; i < N ; i += 3 ){
        back += arr[i] ;
    }
    
    int ma = max ( { chest , biceps , back } ) ;
    if( ma == chest ){
        cout << "chest" << endl ;
    }
    else if ( ma == biceps ){
        cout << "biceps" << endl ;
    }
    else
        cout << "back" << endl ;
    return 0 ;
}

