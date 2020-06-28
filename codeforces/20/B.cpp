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

int main(){
    FAST() ;
    bigint A , B , C ; cin >> A >> B >> C ;
   if (A == 0 ) {
   if (B == 0)
      if( C == 0 )
          cout << "-1" << endl ;
       else
           cout << "0" << endl ;
      else{
       cout << 1 << endl ;
       double ans = -1.0*C/B ;
       cout << fixed << setprecision(10) << ans << endl ;
      }
       return 0 ;
   }
    bigint D = B * B - 4 * A * C ;
    if( D < 0 ){
        cout << "0" << endl ;
        return 0 ;
    }
    if( D == 0 ){
        cout << 1 << endl ;
        double ans = (-B/2.0)/A ;
        cout << fixed << setprecision(10) << ans << endl ;
        return 0 ;
    }
    if( D > 0 ){
        cout << 2 << endl ;
        double root1 = (-B-sqrt(D))/2/A ;
        double root2 = (-B+sqrt(D))/2/A ;
        if( root1 > root2 ){
            cout << fixed << setprecision(10) << root2 << endl << root1 << endl ;
        }
        else
            cout << fixed << setprecision(10) << root1 << endl << root2 << endl ;
    }
    return 0 ;
}
