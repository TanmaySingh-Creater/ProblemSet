/*____________________________________________
 TANMAY SINGH
 INDIAN INSTITUTE OF TECHNOLOGY(BHU), VARANASI
 ______________________________________________
 //
 //  CPlibrary
 //
 //  Created by Tanmay Singh on 21/12/19.
 //  Copyright © 2019 Tanmay Singh. All rights reserved.
 //____________________________________________*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <cstring>
#include <unordered_map>
#include <set>
#include <queue>
#define  mod 1000000007
typedef long long int bigint ;
using namespace std;

int main() {
    
    string str ;
    cin >> str ;
    bigint size = str.size() ;
    int count[size] ;
    memset ( count , 0 , sizeof(count)) ;
    int total = 0 ;
    for( int i = 0 ; i < size ; i++ ){
        if( str[i] == 'Q'){
            total ++ ;
        }
    }
    for( int i = 1 ; i < size ; i++ ){
        if( str[i-1] == 'Q'){
            count[i] = count[i-1] + 1  ;
        }
        else
            count[i] = count[i-1] ;
    }
    

    int sum = 0 ;
    
    for( int i = 0 ; i < size ; i++ ){
        if( str[i] == 'A' ){
            sum += count[i] * ( total - count[i] );
        }
    }
    cout << sum << endl ;
    return 0;
}

// QQQQAAQQQQQAQAQAQAAAQ
//
