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
vector<string> ans ;
void possibleAns( string str , int i  ){
    if( i == str.length() - 1 )
        return ;
    string temp = str ;
    temp[i]-- ;
    for( int j = i + 1 ; j < temp.length() ; j++ )
        temp[j] = '9' ;
    ans.push_back(temp) ;
    possibleAns(str, i + 1 ) ;
}
bigint productCalc( string str ){
    bigint pro = 1 ;
    int pos = -1 ;
    for( int i = 0 ; i < str.length() ; i++ ){
        if( str[i] != '0' ){
            pos = i ;
            break ;
        }
    }
    if( pos == -1 )
        return 0 ;
    for( int i = pos ; i < str.length() ; i++ ){
        pro = pro * ( str[i] - '0' ) ;
    }
    return pro ;
}
int main(){
    int N , R ; cin >> N >> R ;
    map<bigint , int> aage , piche ;
    bigint arr[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
        aage[arr[i]] ++ ;
    }
    bigint ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if( arr[i] % R != 0 ){
            piche[arr[i]]++ ;
            aage[arr[i]] -- ;
            continue ;
        }
        bigint pref = 0 , suffix = 0 ;
        if( piche.find(arr[i] / R) != piche.end() )
            pref = piche[arr[i]/R] ;
        aage[arr[i]] -- ;
        if( aage.find(arr[i]*R) != aage.end() )
            suffix = aage[arr[i]*R] ;
        ans += pref * suffix ;
        piche[arr[i]]++ ;
    }
    cout << ans << endl ;
    return 0 ;
}

