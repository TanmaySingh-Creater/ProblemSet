//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright Â© 2020 Tanmay Singh. All rights reserved.
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
#define MOD 1000000007
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
bool isPrime( int N ){
    for( int i = 2 ; i * i <= N ; i++ ){
        if( N % i == 0 )
            return false ;
    }
    return true ;
}
int main(){
    int T ; cin >> T ;
    while( T-- ){
    int N ; cin >> N ;
        int temp = N ;
    if( N == 1 ){
        cout <<"FastestFinger" << endl ;
        continue ;
    }
    if( isPrime( N ) || N % 2 == 1 ){
        cout << "Ashishgup" << endl ;
        continue ;
    }
    int even = 0 , odd = 0 ;
    while( N % 2 == 0 ){
        even++ ;
        N /= 2 ;
    }
    for( int i = 3 ; i * i <= N ; i += 2 ){
        while( N % i == 0 ){
            odd++ ;
            N /= i ;
        }
    }
    if( N > 1 )
        odd++ ;
    if( odd == 0 ){
        if( even > 1 ){
            cout << "FastestFinger" << endl ;
        }
        else
            cout << "Ashishgup" << endl ;
        continue ;
    }
    else{
        if( even > 1 ){
            cout << "Ashishgup" << endl ;
        }
        else{
            if( isPrime(temp/2) ){
                cout << "FastestFinger" << endl ;
            }
            else
                cout << "Ashishgup" << endl ;
        }
    }
    }
    return 0 ;
}
