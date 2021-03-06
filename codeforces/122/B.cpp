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
    string str ; cin >> str ;
    map<char , int> m ;
    m['4'] = m['7'] = 0 ;
    for( int i = 0 ; i < str.length() ; i++ ){
        m[str[i]]++ ;
    }
    if( m['4'] != 0 || m['7'] != 0 ){
        if( m['7'] > m['4']){
            cout << 7 << endl ;
        }
        else
            cout << 4 << endl ;
    }
    else{
        cout << "-1" << endl ;
    }
    return 0 ;
}

