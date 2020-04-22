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
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;

using namespace std ;
vi binaryNumber ;
void binaryNumbergenerator(int num ){
    if( num > 1000000000 )
        return ;
    binaryNumber.push_back(num) ;
    binaryNumbergenerator(num * 10 ) ;
    binaryNumbergenerator(num * 10 + 1 ) ;
}
bigint toDecimal(int n){
    bigint num = n , dec_value = 0 , base = 1, temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
int main(){
    FAST();
    binaryNumber.push_back(0) ;
    binaryNumbergenerator(1) ;
    binaryNumber.push_back(1000000001) ;
    sort( binaryNumber.begin() , binaryNumber.end() );
    int N ; cin >> N ;
    auto idx = lower_bound(binaryNumber.begin(), binaryNumber.end(), N) - binaryNumber.begin() ;
    if( N == binaryNumber[idx] ){
        cout << toDecimal(N) << endl ;
        return 0 ;
    }
    cout << toDecimal(binaryNumber[idx-1] ) << endl ;
    return 0 ;
}
