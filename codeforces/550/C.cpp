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
int main(){
    FAST() ;
    string str ; cin >> str ;
    bigint N = str.length() ;
    for( int i = 0 ; i < N ; i++ ){
        if( str[i] == '8' || str[i] == '0' ){
            cout << "YES" << endl ;
            cout << str[i] << endl ;
            return 0 ;
        }
    }
    for( int i = 0 ; i < N ; i ++ ){
        for( int j = i + 1 ; j < N ; j++ ){
            int a = str[i] - '0' , b = str[j] - '0' ;
            if( ( a * 10 + b ) % 8 == 0 ){
                cout << "YES" << endl ;
                cout << a << b << endl ;
                return 0 ;
            }
        }
    }
    for( int i = 0 ; i < N - 2 ; i++ ){
        for( int j = i + 1 ; j < N - 1 ; j++ ){
            for( int k = j + 1 ; k < N ; k++ ){
                int a = str[i] - '0' , b = str[j] - '0' , c = str[k] - '0' ;
                if( (a * 100 + 10 * b + c) % 8 == 0 ){
                    cout << "YES" << endl ;
                    cout << a << b << c << endl ;
                    return 0 ;
                }
            }
        }
    }
    cout << "NO" << endl ;
    return 0 ;
}
