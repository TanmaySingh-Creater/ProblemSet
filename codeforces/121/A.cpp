//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
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
#include <limits>
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

typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;

using namespace std ;
const int mod = 1000000007 ;
vector<bigint> lucky ;
void luckyNumgenerator( bigint N ) {
    
    if( N > 1000000000 ){
        return ;
    }
    lucky.push_back(N) ;
    luckyNumgenerator(N * 10 + 4 ) ;
    luckyNumgenerator(N * 10 + 7 ) ;
}

int main(){
    FAST();
    luckyNumgenerator(4) ; luckyNumgenerator(7) ;
    sort( lucky.begin() , lucky.end() );
    lucky.push_back(4444444444) ;
    bigint ans = 0 ;
    bigint L , R ; cin >> L >> R ;
    while( L <= R ){
        bigint next = *lower_bound(lucky.begin(), lucky.end() , L ) ;
        if( next <= R ){
            ans += next * ( next - L + 1 ) ;
            L = next + 1 ;
        }
        else{
            ans += ( R - L + 1 ) * next ;
            L = next + 1 ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
