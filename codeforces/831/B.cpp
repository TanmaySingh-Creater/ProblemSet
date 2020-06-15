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
#define mod 1000000007
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;

int main(){
    string A , B , C ; cin >> A >> B >> C ;
    map<char,char> ch ;
    for( int i = 0 ; i < A.length() ; i++ ){
        ch[A[i]] = B[i] ;
    }
    string ans = "" ;
    for( int i = 0 ; i < C.length() ; i++ ){
        if( C[i] <='9' && C[i] >= '0' ){
            ans += C[i] ;
        }
        else if( C[i] <= 'z' && C[i] >= 'a' ){
            ans += ch[C[i]] ;
        }
        else{
            char a = toupper(ch[tolower(C[i])]) ;
            ans += a ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
