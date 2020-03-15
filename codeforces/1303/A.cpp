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
 
    int main()
    {
        FAST();
        int T ;
        cin >> T ;
        while( T-- ){
        string str ;
        cin >> str ;
        bigint L = str.length() ;
        int first_occurence = -1 , last_occurence = -1 ;
        for( int i = 0 ; i < L ; i++ ){
            if( str[i] == '1') {
                first_occurence  = i ;
                break ;
            }
        }
        for( int i = L - 1 ; i >= 0 ; i-- ){
            if( str[i] == '1' ){
                last_occurence = i ;
                break ;
            }
        }
        
        if( first_occurence == last_occurence ){
            cout <<"0" << endl ;
            continue ;
        }
        int count = 0 ;
        for( int i = first_occurence + 1 ; i < last_occurence ; i++ ){
            if( str[i] == '0'){
                count ++ ;
            }
        }
        cout << count << endl ;
        }
        return 0 ;
    }
