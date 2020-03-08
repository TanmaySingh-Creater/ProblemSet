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

void change_case( string &str ){
    bigint l = str.length() ;
    if( str[0] <='z' && str[0] >='a' ){
        str[0] = toupper(str[0]) ;
    }
    else{
        str[0] = tolower(str[0]) ;
    }
    for (int i = 1 ; i < l ; i++ ){
        str[i] = tolower(str[i]);
    }
}
int main(){
 
    string str ;
    cin >> str ;
    int flag = 0 ;
    for( int i = 1 ; i < str.size() ; i++ ){
        if( str[i] <= 'z' && str[i] >= 'a'){
            flag = 1 ;
            break ;
        }
    }
    
    if( flag == 1 ){
        cout << str << endl ;
        
    }
    else{
        change_case(str) ;
    cout << str << endl ;
    }
    return 0 ;
}
