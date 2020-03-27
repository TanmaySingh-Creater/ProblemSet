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
  
    int row , column ; cin >> row >> column ;
    string even = "" , odd ="" ;
    for( int i = 0 ; i < column ; i++ ){
        even += "#" ;
    }
    for( int i = 0 ; i < column - 1 ; i++ ){
        odd += "." ;
    }
    odd += "#" ;
    
    for( int i = 0 ; i < row ; i++ ){
        if( i % 2 == 0 ){
            cout  << even << endl ;
        }
        else{
            cout << odd << endl ;
            reverse(odd.begin(), odd.end() ) ;
        }
    }
    return 0 ;
}


