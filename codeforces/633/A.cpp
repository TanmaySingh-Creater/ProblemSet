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
int gcd( int a , int b ){
    if( b == 0 )
        return a ;
    return gcd( b , a % b ) ;
}
int main(){
    FAST() ;
    int A , B , C ; cin >> A >> B >> C ;
    if( C % gcd( A , B ) != 0 ){
        cout << "No" << endl ;
        return 0 ;
    }
    bool flag = false ;
    for( int i = 0 ; i <= C / A ; i++ ){
        if( C - A * i >= 0 && (C - A * i) % B == 0 ){
            flag = true ;
            break ;
        }
    }
    if( flag == true )
        cout << "Yes" << endl ;
    else
        cout << "No" << endl ;
    return 0 ;
}
