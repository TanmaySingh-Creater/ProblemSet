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
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
typedef long long  int  bigint ;

using namespace std ;
int main(){
    int T ;
    cin >> T ;
    while( T-- ){
    int N , t ;
    cin >> N >> t ;
    
    int arr[N] ;
    
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    bool p[N] ;
    memset ( p , 0 , sizeof(p)) ;
    int x ;
    for( int i = 0 ; i < t ; i++ ){
        cin >> x ;
        p[x-1] = 1 ;
    }
   
    for( int i = 0 ; i < N - 1  ; i++ ){
        for( int j = 0 ; j < N - 1 ; j++ ){
            if( (arr[j+1] < arr[j]) && p[j] ){
                swap ( arr[j] , arr[j+1]) ;
            }
        }
    }
    int flag = 1 ;
    
    for( int i = 1 ; i < N ; i++ ){
        if( arr[i] < arr[i-1] ){
            flag = 0 ;
            break ;
        }
    }
    if( flag == 1 ){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl ;
    }
    return 0 ;
}
