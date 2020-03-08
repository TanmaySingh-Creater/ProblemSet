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
 
    string a , b ;
    cin >> a >> b ;
    
    for( int i = 0 ; i < a.size() ; i++ ){
        cout << ( (int)(a[i]-'0') ^ (int)(b[i]-'0'));
    }
    cout << endl ;
    return 0 ;
}
