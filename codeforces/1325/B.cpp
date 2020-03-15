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
  FAST() ;
      int T ;
      cin >> T ;
      int X ;
      while( T-- ){
          int N ;
          cin >> N ;
          set<int> s ;
          for( int i = 0 ; i < N ; i++ ){
          cin >> X ;
          s.insert(X) ;
          }
          cout << s.size() << endl ;
      }
      
    return 0;
}

