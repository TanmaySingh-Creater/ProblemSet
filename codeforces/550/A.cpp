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
    string str ; cin >> str ;
    string AB = "AB" , BA = "BA" ;
    int pos = -1 ;
    bool flagAB = false , flagBA = false ;
    for( int i = 0 ; i < str.length() - 1 ; i++ ){
        if( str.substr( i , 2 ) == AB ){
            pos = i + 2 ;
            break ;
        }
    }
    if( pos == -1 ){
        cout << "NO" << endl ;
        return 0 ;
    }
    for( int i = pos ; i < str.length() - 1 ; i++ ){
        if( str.substr( i , 2 ) == BA ){
            flagAB = true ;
            break ;
        }
    }
    int pos2 = -1 ;
    for( int i = 0 ; i < str.length() - 1 ; i++ ){
        if( str.substr( i , 2 ) == BA ){
            pos2 = i + 2 ;
            break ;
        }
    }
    if( pos2 == -1){
        cout << "NO" << endl ;
        return 0 ;
    }
    for( int i = pos2 ; i < str.length() - 1 ; i++ ){
          if( str.substr( i , 2 ) == AB ){
              flagBA = true ;
              break ;
          }
      }
    if( flagAB || flagBA ){
        cout << "YES" << endl ;
    }
    else
        cout << "NO" << endl ;
    return 0 ;
}
