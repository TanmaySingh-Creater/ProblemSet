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
bool isPossible( int N ){
    int sum = 0 ;
    while( N > 0 ){
        int d = N % 10 ;
        sum += d ;
        N /= 10 ;
    }
    if( sum == 10 )
        return true ;
    return false ;
}
int main(){
    FAST();
    int K ; cin >> K ;
    int count = 0 ;
    int i ;
    for( i = 19 ; i <= 100000000 ; i++ ){
        if( isPossible(i) )
            count++ ;
        if( count == K )
            break ;
    }
    cout << i << endl ;
    return 0 ;
}
