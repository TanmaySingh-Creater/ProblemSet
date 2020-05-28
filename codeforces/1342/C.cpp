//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("1avx2")
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
#include <fstream>
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

using namespace std ;

int main(){
    FAST() ;
    int T ; cin >> T ;
    while( T-- ){
    int A , B , Q ; cin >> A >> B >> Q ;
    bigint pref[A*B+1] ;
    memset(pref, 0, sizeof(pref)) ;
    for( int i = 1 ; i <= A * B ; i++ ){
        if( ( i % A )% B != ( i % B ) % A )
            pref[i] = pref[i-1] + 1 ;
        else
            pref[i] = pref[i-1] ;
        }
    while( Q-- ){
        bigint L , R ; cin >> L >> R ;
        bigint anstillR = pref[A*B] *( R / (A * B)) + pref[R %( A*B )]  ;
        bigint anstillL = pref[A*B] * (( L - 1 ) / ( A * B )) + pref[( L - 1 ) % ( A * B )] ;
        cout << anstillR - anstillL << " " ;
    }
    cout << endl ;
    }
    return 0 ;
}
