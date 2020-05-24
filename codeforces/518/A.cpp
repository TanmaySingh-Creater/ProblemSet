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
    string str1 , str2 ; cin >> str1 >> str2 ;
    if( str1 >= str2 ){
        cout << "No such string" << endl ;
        return 0 ;
    }
    int pos = -1 ;
    for( int i = 0 ; i < str1.size() ; i++ ){
        if( str2[i] - str1[i] > 0 ){
            pos = i ;
            break ;
        }
    }
    string temp = str2 ;
    if( pos != -1 ){
            if( str2[pos] - str1[pos] > 1 ){
                str2[pos]-- ;
                cout << str2 << endl ;
                return 0 ;
            }
        for( int i = pos + 1 ; i < str2.length() ; i++ ){
            str2[i] = 'a' ;
        }
        if( str2 != temp )
            cout << str2 << endl ;
        else{
            str2[pos]-- ;
            for( int i = pos + 1 ; i < str2.length() ; i++ ){
                str2[i] = 'z' ;
            }
            if( str2 != str1 )
                cout << str2 << endl ;
            else
               cout << "No such string" << endl ;
        }
    }
    else
        cout << "No such string" << endl ;
    return 0 ;
}

