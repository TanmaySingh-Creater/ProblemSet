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
    vector<int> v ;
    for( int i = 0 ; i < str.size() ; i++ ){
        if( ( str[i] - 48 ) % 2 == 0 ){
            v.push_back(i) ;
        }
    }
    if( v.size() == 0 ){
        cout << "-1" << endl ;
        return 0 ;
    }
    int pos = v.back() ;
    for( auto x : v ){
        if ( str[x] < str[str.size() - 1] ){
            pos = min( pos , x ) ;
        }
    }
    swap( str[pos] , str[str.size()-1] ) ;
    cout << str << endl ;
    return 0 ;
}
