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
    vector<pair<int , int>> ans ;
    int N ; cin >> N ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    for( int i = 0 ; i < N - 1 ; i++ ){
        int pos = -1 , min = arr[i] ;
        for( int j = i + 1 ; j < N ; j++ ){
            if( arr[j] < min ){
                min = arr[j] ;
                pos = j ;
            }
        }
        if( pos != -1 ){
            swap(arr[i], arr[pos]) ;
            ans.push_back({i,pos}) ;
        }
    }
    cout << ans.size() << endl ;
    for( auto x : ans )
        cout << x.first << " " << x.second << endl ;
    return 0 ;
}

