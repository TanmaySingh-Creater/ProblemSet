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

int cnt[10000001], F[10000001] , pref_sum[10000001] ;

void makeFunctionF(){
    for( int i = 2 ; i < 10000001 ; i++ ){
        if( F[i] >= 0){
        F[i] = cnt[i] ;
        for( int j = 2 * i ; j < 10000001 ; j += i ){
            F[i] += cnt[j] ;
            F[j] = -1 ;
        }
      }
    }
}
            
int main(){
    FAST();
    int N ; cin >> N ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
        cnt[arr[i]] ++ ;
    }
    makeFunctionF() ;
    for( int i = 2 ; i < 10000001 ; i++ ){
        pref_sum[i] = pref_sum[i-1] + max( 0 , F[i] ) ;
    }
    int Q ; cin >> Q ;
    while( Q-- ){
        int L , R ; cin >> L >> R ;
        L = min( L , 10000000 ) ;
        R = min( R , 10000000 ) ;
        cout << pref_sum[R] - pref_sum[L-1] << endl ;
    }
    return 0 ;
}
