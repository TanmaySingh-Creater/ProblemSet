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

bool isSubsequence(string s1, string s2){
    bigint N = s1.length() , M = s2.length();
    int j = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if( s1[i] == s2[j] )
            j++ ;
    }
    if( j == M )
        return true ;
    return false ;
}
int main(){
    FAST() ;
    string str1 , str2 ; cin >> str1 >> str2 ;
    int freq1[26] = { 0 } , freq2[26] = { 0 } ;
    for( int i = 0 ; i < str1.length() ; i++ )
        freq1[str1[i]-'a'] ++ ;
    for( int i = 0 ; i < str2.length() ; i++ )
        freq2[str2[i]-'a'] ++ ;
    
    if( isSubsequence(str1, str2) ){
        cout << "automaton" << endl ;
        return 0 ;
    }
   
    for( int i = 0 ; i < 26 ; i++ ){
        if( freq1[i] < freq2[i] ){
            cout << "need tree " << endl ;
            return 0 ;
        }
    }
    if( str1.length() > str2.length() ){
        cout << "both" << endl ;
        return 0 ;
    }
    cout << "array" << endl ;
    return 0 ;
}
