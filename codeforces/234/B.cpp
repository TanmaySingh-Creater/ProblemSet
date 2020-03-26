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

struct arr{
    int key ;
    int pos ;
};
bool cmp( arr a , arr b ){
    return a.key < b.key ;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int N , X ; cin >> N >> X ;
    arr A[N];
    for( int i = 0 ; i < N ; i++ ){
        cin >> A[i].key ;
    }
    for( int i = 0 ; i < N ; i++ ){
        A[i].pos = i + 1 ;
    }
    sort ( A , A + N , cmp ) ;
   
    cout << A[N - X].key << endl ;
    for( int i = N - X ; i < N ; i++ ){
        cout << A[i].pos <<" ";
    }
    
    
    return 0 ;
}

