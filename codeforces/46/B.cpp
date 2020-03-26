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
    int arr[6] ;
    arr[0] = 0 ;
    for( int i = 1 ; i < 6 ; i++ ){
        cin >> arr[i] ;
    }
    int Q ; cin >> Q ;
    vector<vector <int> > prefs = { {  1,2,3,4,5  },{  2,3,1,4,5  },{  3,4,2,5,1  },{  4,5,3,2,1  },{  5,4,3,2,1  }  };
    map <string , int> m ; map <int , string> T ;
    T[1] ="S" ;  T[2] ="M" ;  T[3] ="L" ;  T[4] ="XL" ;  T[5] ="XXL" ;
    m["S"] = 0 ;  m["M"] = 1 ;  m["L"] = 2 ;  m["XL"] = 3 ;  m["XXL"] = 4 ;
    while( Q-- ){
        string str ; cin >> str ;
        for( int i = 0 ; i < 5 ; i++ ){
            if( arr[prefs[m[str]][i]] > 0 ){
                arr[prefs[m[str]][i]] -- ;
                cout << T[prefs[m[str]][i]]<< endl ;
                break ;
            }
        }
    }
  
    return 0 ;
}

