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
 
int spf[MAX] ;
using namespace std ;

int main(){
        FAST();
   
    bigint N ;
    cin >> N ;
    vector <bigint> A(N) , B(N) ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> A[i] ;
    }
    for( int i = 0 ; i < N ; i++ ){
           cin >> B[i] ;
    }
    
    vector<int>diff( N ) ;
    for( int i = 0 ; i < N ; i++ ){
        diff[i] = A[i] - B[i] ;
    }
    sort( diff.begin() , diff.end() );
    auto itr = diff.begin() ;
    bigint count = 0 ;
    for( bigint i = 0 ; i < diff.size() ; i++ ){
        if( diff[i] > 0 ){
            count += (i - (lower_bound(diff.begin(), diff.begin() + i  , -diff[i] + 1 ) - itr)) ;
        }
    }
    cout << count << endl ;
    
        return 0 ;
    }
