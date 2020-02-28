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
int sum( int , int );
int main(){
  
    int N , L ;
    cin >> N >> L ;
    int arr[N] ;
    for(int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    sort( arr , arr + N );
    int m =  2 * max( arr[0] - 0 , L - arr[N-1] )  ;;
    for( int i = 0 ; i < N - 1 ; i++ ){
        m = max( m ,arr[i + 1 ] - arr[i] ) ;
    }
        printf( "%.10f\n"  ,  m / 2.0  );
    return 0 ;
}
