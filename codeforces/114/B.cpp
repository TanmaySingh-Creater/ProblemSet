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
int countSet( bigint N ){
    int cnt = 0 ;
    while( N ){
        cnt++ ;
        N = ( N - 1 ) & N ;
    }
    return cnt ;
}
int main(){
    bigint N , M ; cin >> N >>  M ;
      map<string,bigint> m ;
      map<bigint,string> n ;
      for( bigint i = 0 ; i < N ; i++ ){
          string str ; cin >> str ;
          m[str] = i ;
          n[i] = str ;
      }
      vector<pair<string,string>> rivals ;
      bigint ans_mask = 1 , digits = 1 ;
      for( int i = 0 ; i < M ; i++ ){
          string A , B ; cin >> A >> B ;
          rivals.push_back({A,B}) ;
      }
      for( bigint mask = 1 ; mask < ( 1 << N ) ; mask++ ){
          bool flag = true ;
          for( auto x : rivals ){
              bigint a = m[x.first] , b = m[x.second] ;
              if( (mask & ( 1 << a )) && ( mask & ( 1 << b )) ){
                  flag = false ;
                  break ;
              }
          }
          if( flag  ){
              bigint newD = countSet(mask) ;
              if( newD > digits ){
                  ans_mask = mask ;
                  digits = newD ;
              }
          }
      }
      set<string> ans ;
    bigint Sum =  log2(ans_mask) + 1 ;
      for( bigint i = 0 ; i < Sum ; i++ ){
          if( ans_mask & ( 1 << i ) ){
              ans.insert(n[i]) ;
          }
      }
      cout << ans.size() << endl ;
      for( auto x : ans )
          cout << x << endl ;
    return 0 ;
}
