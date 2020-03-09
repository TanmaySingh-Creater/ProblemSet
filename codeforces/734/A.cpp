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
    string str ;
    cin >> str ;
    int count[4] ;
    memset( count , 0 , sizeof( count ) );
    for( int i = 0 ; i < N; i++ ){
        count[str[i] - 'A'] ++ ;
    }
    if( count[0] > count[3] ){
        cout <<"Anton" << endl ;
    }
    else if( count[0] < count[3] ){
        cout << "Danik" << endl ;
    }
    else{
        cout << "Friendship" << endl ;
    }
    return 0;
}
