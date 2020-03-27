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
#define MAX 1000000
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;

using namespace std ;

int main(){
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    FAST();
    int N , K  ; cin >> N >> K  ;
    if( N == K ){
        cout << 0 <<" " << 6 << " " << 0 << endl ;
        return 0 ;
    }
    if(( N + K ) % 2 == 0 ){
        if( N < K ){
        cout <<  ( N + K ) / 2 - 1 << " " << 1 << " " << 6 - ( N + K ) / 2 << endl ;
        }
        else{
             cout << 6 - ( N + K ) / 2 << " " << 1 << " " << ( N + K ) / 2 - 1 << endl ;
        }
    }
    else{
        if( N < K ){
        cout << ( N + K ) / 2 << " " << 0 << " " << 6 - ( N + K ) / 2 << endl ;
        }
        else{
             cout << 6 - ( N + K ) / 2 << " " << 0 << " " <<( N + K ) / 2  << endl ;
        }
    }
    return 0 ;
}





