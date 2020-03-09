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
    string str ;
    getline( cin , str );
    set < char > s ;
    
    for( int i = 0 ; i < str.size() ; i++ ){
        s.insert( str[i] ) ;
    }
    if( str.size() == 2 || str.size() == 3  ){
        cout <<str.size() - 2<<endl;
    }
    else
    cout << s.size() - 4 << endl ;
    return 0;
}

