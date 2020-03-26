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
    int N ; cin >> N ;
    int arr[26] ;
    for( int i = 0 ; i < 26 ; i++ ){
        cin >> arr[i] ;
    }
    int ans = 0 ;
    for( int i = 0 ; i < str.length() ; i++ ){
        ans += (arr[str[i] - 'a'])* ( i + 1 ) ;
    }
    int ma = arr[0]  , pos = 0 ;
    for( int i = 1 ; i < 26 ; i++ ){
        if( arr[i] > ma ){
            ma = arr[i] ;
            pos = i ;
        }
    }
    for( int i = str.length() + 1 ; i <= str.length() + N ; i++ ){
        ans += ma * i ;
    }
    cout << ans << endl ;
    return 0 ;
}

