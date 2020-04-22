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
set<int> s ;
void primeFactorization( int N ){
    for( int i = 2 ; i * i <= N ; i++ ){
        while( N % i == 0 ){
            s.insert(i) ;
            N /= i ;
        }
    }
    if( N > 1 )
        s.insert(N) ;
}
            
int main(){
    FAST();
    int N ; cin >> N ;
    int a , b ;
    vector<pair<int , int> > v ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> a >> b ; v.push_back( make_pair ( a ,  b) ) ;
    }
    primeFactorization( v[0].first ) ;
    primeFactorization( v[0].second ) ;
    for( int prime : s ){
        bool flag = true ;
        for( int i = 1 ; i < v.size() ; i++ ){
            if( (v[i].first % prime != 0) && (v[i].second % prime != 0) ){
                flag = false ;
                break ;
            }
        }
        if( flag == true ){
            cout << prime << endl ;
            return 0 ;
        }
    }
    cout << "-1" << endl ;
    return 0 ;
}
