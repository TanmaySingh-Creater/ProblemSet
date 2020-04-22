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
bool prime[1001] ;

int main(){
    FAST();
    string str ; cin >> str ;
    memset( prime, 1, sizeof(prime) ) ;
     prime[1] = true ; // jaan puch ke
    for( int i = 2 ; i * i < 1001 ; i++ ){
        if( prime[2] ){
            for( int j = i * i ; j < 1001 ; j += i ){
                prime[j] = false ;
            }
        }
    }
    int freq[26] = { 0 } ;
    set<int> s ;
    int N = ( int ) str.size() ;
    for( int i = 2 ; i <= N / 2 ; i++ ){
        if( prime[i] ){
            for( int j = i ; j <= N ; j += i ){
                s.insert(j) ;
            }
        }
    }
    bigint same =  s.size() ;
    for( int i = 0 ; i < N ; i++ ){
        freq[str[i] - 'a']++ ;
    }
    char ch = '-';
    for( int i = 0 ; i < 26 ; i++ ){
        if( freq[i] >= same ){
            ch = 'a' + i ;
            freq[i] -= same ;
        }
    }
    if( ch == '-' ){
        cout << "NO" << endl ;
        return 0 ;
    }
    char S[N + 1] ;
    for( int i = 1 ; i <= N ; i++ )
        S[i] = '-' ;
    for( auto x : s ){
        S[x] = ch ;
    }
    for( int i = 1 ; i <= N ; i++ ){
        if( prime[i] && S[i] == '-' ){
            for( int j = 0 ; j < 26 ; j++ ){
                if( freq[j] > 0 ){
                    S[i] = 'a' + j ;
                    freq[j]-- ;
                    break ;
                }
            }
        }
    }
    cout << "YES" << endl ;
    for( int i = 1 ; i <= N ; i++ ){
        cout << S[i] ;
    }
    cout << endl ;
    return 0 ;
    
}
