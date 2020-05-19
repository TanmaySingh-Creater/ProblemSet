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

bigint binaryExponetiation( bigint A , bigint B , bigint P ){
    bigint ans = 1 ;
    while( B ){
        if( B & 1 )
            ans = (ans % P * A % P) % P ;
        A = (A % P  * A % P) % P ;
        B >>= 1 ;
    }
    return ans ;
}

int main(){
    FAST() ;
    int P ; cin >> P ;
    int cnt = 0 ;
    for( int i = 1 ; i < P ; i++ ){
    bool flag = true ;
        for( int j = 1 ; j <= P - 2 ; j++ ){
            bigint A = (binaryExponetiation(i, j, P) - 1 + P ) % P ;
            if( A == 0 ){
                flag = false ;
                break ;
            }
        }
        if( flag == true && (binaryExponetiation(i, P-1, P) - 1 + P ) % P == 0 ){
            cnt++ ;
        }
    }
    cout << cnt << endl ;
    return 0 ;
}
