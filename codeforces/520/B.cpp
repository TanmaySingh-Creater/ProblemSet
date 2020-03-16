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

int ways ( int a , int b ) {
    if( b <= a  ){
        return a - b ;
    }
    if( b % 2 == 0 ){
        return  1 + ways ( a , b / 2 ) ;
    }
    else
        return 1 +  ways( a , b + 1 ) ;
    
    
    
}

bool primes[MAX] ;
vector <bigint>* prime ;
using namespace std ;
int main(){
  
    int a , b ;
    cin >> a >> b ;
    
    if( a >= b ){
        cout << a - b << endl ;
        return 0 ;
    }
    
    cout << ways( a , b ) << endl ;
    
        return 0 ;
    
    
    }
// 1 0 1 0
// 1 0 1 1
// 0 0 0 1
