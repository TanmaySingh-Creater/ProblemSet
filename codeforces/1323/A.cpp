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
#define mod 1000000009
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
 
using namespace std;

int main(){
    FAST() ;
    int T ; cin >> T ;
    while( T-- ){
        int N ; cin >> N ;
        int arr[N] ;
        vi v[2] ;
        for( int i = 0 ; i < N ; i++ ){
            cin >> arr[i] ;
            if( arr[i] % 2 == 0 )
                v[0].push_back(i+1) ;
            else
                v[1].push_back(i+1) ;
        }
        if( v[0].size() != 0 ){
            cout << 1 << endl ;
            cout << v[0][0] << endl ;
        }
        else if ( v[1].size() > 1 ){
            cout << 2 << endl ;
            cout << v[1][0] << " " << v[1][1] << endl ;
        }
        else
            cout << "-1" << endl ;
    }
    return 0 ;
}
