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
    
    int matrix[6][6] ;
    int posi , posj ;
    for( int i = 1 ; i <= 5 ; i++ ){
        for( int j = 1 ; j <= 5 ; j++ ){
            cin >> matrix[i][j] ;
            if( matrix[i][j] == 1 ){
                posi = i , posj = j ;
            }
        }
    }
    cout << abs( 3 - posi ) + abs ( 3 - posj ) << endl ;
    
   
    return 0 ;
}
