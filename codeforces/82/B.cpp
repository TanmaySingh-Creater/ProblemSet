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

int main(){
    FAST();
    int N ; cin >> N ;
    vi arr[201] ;
    if( N == 2 ){
            int A ; cin >> A ;
            int brr[A] ;
            set<int> s ;
            for( int j = 0 ; j < A ; j++ ){
                cin >> brr[j] ;
            }
            cout << 1 << " " << brr[0] << endl ;
            cout << A - 1 << " " ;
            for( int i = 1 ; i < A ; i++ ){
                cout << brr[i] << " " ;
            }
        return 0 ;
    }
    for( int i = 0 ; i < (N * ( N - 1 )) / 2 ; i++ ){
        int S ; cin >> S ;
        for( int j = 0 ; j < S ; j++ ){
            int K ; cin >> K ;
            arr[K].push_back( i ) ;
        }
    }
    
    for( int i = 0 ; i < 201 ; i++ ){
        if( !arr[i].empty() ){
        vector<int> ans ;
        ans.push_back(i) ;
        for( int j = i + 1 ; j < 201 ; j ++ ){
            if( arr[i] == arr[j] && !arr[i].empty() ){
                ans.push_back(j) ;
                arr[j].clear() ;
            }
        }
        if( !ans.empty() ){
            cout << ans.size() << " " ;
            for( auto x : ans ){
                cout << x << " " ;
            }
            cout << endl ;
        }
      }
    }
    return 0 ;
}
