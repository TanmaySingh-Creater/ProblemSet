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
    
    int N ;
    cin >> N ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    sort( arr , arr + N );
    
    if( N % 2 == 0 ){
    cout << arr[N/2 - 1] << endl ;
    }
    else
        cout << arr[N/2] << endl ;
    return 0;
}
