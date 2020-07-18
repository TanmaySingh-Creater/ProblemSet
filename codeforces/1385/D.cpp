//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright Â© 2020 Tanmay Singh. All rights reserved.
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
#define mod 998244353
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
string str ;
bigint getAns( char ch , int start , int end ){
    if( start - end + 1 == 1 ){
        if( str[start] == ch )
            return 0 ;
        return 1 ;
    }
    int mid = start + ( end - start ) / 2 ;
    int cnt = 0 ;
    for( int i = start ; i <= mid ; i++ ){
        if( str[i] != ch )
            cnt++ ;
    }
    bigint ans = cnt + getAns(ch+1, mid + 1, end) ;
    cnt = 0 ;
    for( int i = end ; i > mid ; i-- ){
        if( str[i] != ch )
            cnt++ ;
    }
    bigint A2 = cnt + getAns(ch+1, start, mid) ;
    ans = min( ans , A2 ) ;
    return ans ;
}
int main(){
    int T ; cin >> T ;
    while( T-- ){
        int N ; cin >> N ;
        cin >> str ;
        cout << getAns('a', 0, N-1) << endl ;
    }
    return 0 ;
}
