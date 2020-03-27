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
    bigint N , M ; cin >> N >> M ;
    bigint arr[N] , pref_sum[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    memset(pref_sum, 0, sizeof(pref_sum ) );
    pref_sum[0] = arr[0] ;
    for( int i = 1 ; i < N ; i++ ){
        pref_sum[i] = arr[i] + pref_sum[i - 1 ] ;
    }
    bigint X ;
    for( int i = 0 ; i < M ; i++ ){
        cin >> X ;
        auto ans = lower_bound(pref_sum, pref_sum + N , X) - pref_sum ;
        if( ans == 0 ){
            cout << ans + 1 <<" " << X << endl ;
            
        }
        else{
            cout << ans + 1 << " " << X - pref_sum[ans - 1 ] << endl ;
        }
    }
    return 0 ;
}


