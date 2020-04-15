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
typedef std::vector< vi > vvi;


using namespace std ;

//void dfs (int node ,  vi arr[] , bool visted[] , int distance , int dist[] ){
//
//}

int main(){
    FAST();
    int T ; cin >> T ;
    while( T-- ){
        int N ; cin >> N ;
        vi arr( N ) ;
        for( int i = 0 ; i < N ; i++ ){
            cin >> arr[i] ;
        }
        sort(arr.begin() , arr.end() );
        vi v ;
        int k = 0 ;
        int L ;
        if( N % 2 == 0)
            L = N / 2 ;
        else
            L = N / 2  + 1 ;
        for( int i = N - 1 ; i >= N - L ; i-- ){
            if( i == k ){
                v.push_back(arr[i]) ;
            }
            else{
                v.push_back(arr[i]) ; v.push_back(arr[k++]) ;
            }
        }
        reverse(v.begin(), v.end()) ;
        for( int x : v )
            cout << x << " " ;
        cout << endl ;
     }
    return 0 ;
}
