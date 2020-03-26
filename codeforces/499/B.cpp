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
    int W , N ; cin >> W >> N ;
    vector <string> arr( W );
    map< string , string > m ;
    string str1 , str2 ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> str1 >> str2 ;
        if( str1.length() > str2.length() ){
            m[str1] = str2 ;
            m[str2] = str2 ;
        }else{
            m[str1] = str1 ;
            m[str2] = str1 ;
        }
    }
    for( int i = 0 ; i < W ; i++ ){
           string str ;
           cin >> str ;
           arr[i] = str ;
       }
    for( int i = 0 ; i < W ; i++ ){
        cout << m[arr[i]] <<" ";
    }
    cout << endl ;
    return 0 ;
}

