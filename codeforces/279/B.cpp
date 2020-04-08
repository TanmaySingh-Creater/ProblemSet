//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
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
#define MAX 1e9+7
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;
 
using namespace std ;

bool isPossible( int arr[] , int Target , int size , int K ){
    if( size < K ){
        return false ;
    }
    int window_sum = 0 ;
    for( int i = 0 ; i < K ; i++ ){
        window_sum += arr[i] ;
    }
    if( window_sum <= Target ){
        return true ;
    }
    for( int i = K ; i < size ; i++ ){
        window_sum += arr[i] - arr[i-K] ;
        if( window_sum <= Target){
            return true ;
        }
    }
    return false ;
}
int main(){
    bigint N , T ; cin >> N >> T ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    bigint ans = 0 , low = 0 , sum = 0  ;
    for( int i = 0 ; i < N ; i++ ){
        sum += arr[i] ;
        while( sum > T ){
            sum -= arr[low] ;
            low++ ;
        }
        ans = max( ans , i - low + 1 ) ;
    }
    cout << ans << endl ;
    return 0 ;}
// .   .
// 1 2 1 1 2
// 1 3 4 5 7
// 7 6 4 3 2
