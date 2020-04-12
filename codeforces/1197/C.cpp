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
#include <set>
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
set<bigint> s ;
 
int main(){
    int N , K ; cin >> N >> K ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    int ans = arr[N-1] - arr[0] ;
    vector<int> v ;
    for( int i = 1 ; i < N ; i++ ){
        v.push_back(arr[i-1] - arr[i]);
    }
    sort( v.begin() , v.end() ) ;
    for( int i = 0 ; i < K - 1 ; i++ ){
        ans += v[i] ;
    }
    cout << ans << endl ;
    return 0 ;
}