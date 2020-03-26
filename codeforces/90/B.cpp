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
    int N , M ; cin >> N >> M ;
    char matrix[101][101] ;
    for( int i = 0 ; i < N ; i++ ){
        for( int j = 0 ; j < M ; j++ ){
            cin >> matrix[i][j] ;
        }
    }
    
    for( int i = 0 ; i < N ; i++ ){
        for( int j = 0 ; j < M ; j++ ){
            // search column
            
            bool milar = false , milac = false ;
            char ch = matrix[i][j] ;
            for( int k = 0 ; k < N ; k++ ){
                if( matrix[k][j] == ch && k != i ){
                    milar = true ; break ;
                }
            }
            //search row
            for( int k = 0 ; k < M ; k++ ){
                if( matrix[i][k] == ch && k != j ){
                    milac = true ; break ;
                }
            }
            if( milar || milac ){
                continue ;
            }
            cout << matrix[i][j] ;
        }
    }
    cout << endl ;
    return 0 ;
}

