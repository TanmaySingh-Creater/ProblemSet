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

void printSequence( int zeros , int ones ){
    while( true ){
        if( ones == 0 )
            return ;
        if( zeros == 0 ){
            for( int i = 0 ; i < ones ; i++ )
                cout << "1" ;
            return ;
        }
        else if( zeros > ones ){
            cout << "0" ; zeros -- ;
        }
        else if( zeros == ones ){
            cout << "10" ; ones -- ; zeros-- ;
        }
        if( ones > zeros ){
            cout << "110" ;
            ones -= 2 ; zeros -- ;
        }
    }
}

int main(){
    FAST();
    int zeros , ones ; cin >> zeros >> ones ;
    int maxZeros = ones + 1 ;
    int minZeros = ceil(double( ones ) / 2 ) - 1 ;
    if( zeros > maxZeros || zeros < minZeros ){
        cout << "-1" << endl ;
        return 0 ;
    }
    printSequence( zeros , ones ) ;
    return 0 ;
}
