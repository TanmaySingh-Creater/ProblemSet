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
    
    if( N % 2 == 0 ){
        cout << N / 2 << endl ;
        for( int i = 0 ; i < N /2 ; i++ ){
            cout << "2" << " " ;
        }
        return 0 ;
    }
    cout << N / 2 << endl ;
    for( int i = 0 ; i < ( N - 3 ) / 2 ; i++ ){
        cout << "2 ";
    }
    cout <<"3"<<endl;
    
    return 0 ;
}
