//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
 
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <climits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <ratio>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
 
using namespace std;
bool isValid( string str ){
    int l = 0 , u = 0 , d = 0 ;
    for( int i = 0 ; i < str.length() ; i++ ){
        if( str[i] >= 'A' && str[i] <= 'Z' )
            u++ ;
        else if( str[i] >= 'a' && str[i] <='z' )
            l++ ;
        else
            d++ ;
    }
    if( l == 0 || d == 0 || u == 0 )
        return false ;
    return true ;
}
int main(){
    int T ; cin >> T ;
    while( T-- ){
    string str ; cin >> str ;
    if( isValid(str)){
        cout << str << endl ;
        continue ;
    }
        bool flag = false ;
    char arr[3] = { 'a' , 'A' , '1' } ;
    for( char ch : arr ){
        for( int i = 0 ; i < str.length() ; i++ ){
            char a = str[i] ;
            str[i] = ch ;
            if( flag == true ){
                           break ;
                       }
            if( isValid( str ) ){
                cout << str << endl ;
                flag = true ;
                break ;
            }
            if( flag == true ){
                break ;
            }
            str[i] = a ;
        }
    }
    if( flag == true )
        continue ;
    if( str[0] >= 'A' && str[0] <= 'Z' ){
        str[1] = 'a' ; str[2] = '1' ;
        cout << str << endl ;
        continue ;
    }
    if( str[0] >= 'a' && str[0] <= 'z' ){
        str[1] = 'A' ; str[2] = '1' ;
        cout << str << endl ;
        continue ;
    }
    str[1] = 'a' ; str[2] = 'A' ;
    cout << str << endl ;
    }
    return 0 ;
}

