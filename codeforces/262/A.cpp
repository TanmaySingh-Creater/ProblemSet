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

int lucky_digits( int num ){
    
    int digits = 0 ;
    while( num > 0 ){
        int digit = num % 10 ;
        if( digit == 7 || digit == 4 ){
            digits++ ;}
            num /= 10 ;
    }
    return digits ;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    FAST();
    int N , K ; cin >> N >> K ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    int ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if(lucky_digits(arr[i]) <= K){
            ans ++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}

