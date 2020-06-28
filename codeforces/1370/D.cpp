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
int L , N ;
bool isoddValid( int arr[] , int K ){
    int cnt = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if( cnt % 2 == 0 && arr[i] <= K )
            cnt++ ;
        else if( cnt % 2 == 1 )
            cnt++ ;
    }
    if( cnt >= L )
        return true ;
    return false ;
}
bool isevenValid( int arr[] , int K ){
    int cnt = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if( cnt % 2 == 1 && arr[i] <= K )
            cnt++ ;
        else if( cnt % 2 == 0 )
            cnt++ ;
    }
    if( cnt >= L )
        return true ;
    return false ;
}

int main(){
    cin >> N >> L ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    int low = 1 , high = 1e9 , ans = 1 ;
    while( low <= high ){
        int mid = low + ( high - low ) / 2 ;
        if( isoddValid(arr,mid) || isevenValid(arr, mid)){
            ans = mid ;
            high = mid - 1 ;
        }
        else
            low = mid + 1 ;
    }
    cout << ans << endl ;
    return 0 ;
}
