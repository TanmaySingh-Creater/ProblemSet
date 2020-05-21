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
#define mod 1000003
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;

using namespace std;

int main(){
    FAST() ;
    int N ; cin >> N ;
    char ch[N][5] ;
    for( int i = 0 ; i < N ; i++ ){
        for( int j = 0 ; j < 5 ; j++ ){
            cin >> ch[i][j]  ;
        }
    }
    bool flag = false ;
    for( int i = 0 ; i < N ; i++ ){
        char a = ch[i][0] , b = ch[i][1] , c = ch[i][3] , d = ch[i][4] ;
        if( (a == b && b == 'O' ) ){
            ch[i][0] = '+' ; ch[i][1] = '+' ;
            flag = true ;
            break ;
        }
    if( c == d && d == 'O' ){
        ch[i][3] = '+' ; ch[i][4] = '+' ;
        flag = true ;
        break ;
    }
}
    if( flag )
        cout << "YES" << endl ;
    else{
        cout << "NO" << endl ;
        return 0 ;
    }
    for( int i = 0 ; i < N ; i++ ){
        for( int j = 0 ; j < 5 ; j++ ){
            cout << ch[i][j] ;
        }
        cout << endl ;
    }
    
    return 0 ;
}
