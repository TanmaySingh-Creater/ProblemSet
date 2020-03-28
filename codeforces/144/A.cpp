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
    int N ; cin >> N ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    vector <int> mi_pos , ma_pos ;
    int index_mi = 0 , index_ma = 0 ;
    
    for( int i = 1 ; i < N ; i++ ){
        if( arr[i] <= arr[index_mi] ){
            index_mi = i ;
        }
        if( arr[i] > arr[index_ma] ){
            index_ma = i ;
        }
    }
    if( arr[index_ma] == arr[index_mi] ){
        cout << 0 << endl ;
    }
    else if( index_ma < index_mi ){
        cout << index_ma + N - index_mi - 1 << endl ;
    }
    else
        cout << index_ma + N - index_mi - 2  << endl ;
    
    return 0 ;
}


