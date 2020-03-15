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
 
int spf[MAX] ;
using namespace std ;

int main(){
        FAST();
    string str ;
    cin >> str ;
   vector <string> s ;
   
    for( int i = 0 ; i < 80 ; i += 10 ){
        s.PB( str.substr(i , 10 )) ;
    }
    map< string , int > m ;
   
    for( int i = 0 ; i < 10 ; i++ ){
        cin >> str ;
        m[str] = i ;
    }
   
    for( auto x : s ){
        cout << m[x];
    }
    cout << endl ;
        return 0 ;
    }
