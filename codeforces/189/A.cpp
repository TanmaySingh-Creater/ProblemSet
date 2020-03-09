//
//  CPlibrary
//
//  Created by Tanmay Singh.
//  Copyright © 2020 Tanmay Singh. All rights reserved.
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
#include <climits>

#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
typedef long long  int  bigint ;
 
using namespace std ;


int main(){
 
    
    int N , a , b , c ;
    cin >> N >> a >> b >> c ;
    
    int m = max ( { N / a , N / b , N / c } ) ;
    int ans = INT_MIN;
    for( int i = 0 ; i <= m ; i++ ){
        for( int j = 0 ; j <= m ; j++ ){
            int sum = i * a + j * b ;
            if( (N - sum) % c == 0  ){
                if( (N - sum ) < 0 ){
                    break ;
                }
                int k = ( N - sum ) / c ;
                ans = max ( ans , i + j + k ) ;
            }
        }
    }
    cout << ans << endl ;
    
    return 0 ;
}
