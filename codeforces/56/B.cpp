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
int main(){
    FAST() ;
    int N ; cin >> N ;
    int arr[N]  ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    int pos1 = -1 , pos2 = -1 ;
    for( int i = 0 ; i < N ; i++ ){
        if( arr[i] != i + 1 ){
            pos1 = i ;
            break ;
        }
    }
    for( int i = N - 1 ; i > pos1 ; i-- ){
        if( arr[i] != i + 1 ){
            pos2 = i ;
            break ;
        }
    }
    if( pos1 == -1 && pos2 == -1 ){
        cout << "0 0" << endl ;
        return 0 ;
    }
    bool flag = true ;
    for( int i = pos1 ; i < pos2 ; i++ ){
        if(arr[i+1] > arr[i] ){
            flag = false ;
            break ;
        }
    }
    if( flag == true )
        cout << pos1 + 1 << " " << pos2 + 1<< endl ;
    else
        cout << "0 0" << endl ;
    return 0 ;
}
