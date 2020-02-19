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
    
    int N ;
    cin >> N ;
    
    int x ;
    int odd = 0 ,  even = 0 ;
    int lodd = 1  , leven = 1 ;
    
    for( int i = 1 ; i <= N ; i++ ){
        cin >> x ;
        if( x & 1 ){
            odd++ ;
            lodd = i ;
        }
        else{
            even ++ ;
            leven = i ;
        }
    }
    
    int ans = ( odd > even ) ? leven : lodd ;
    cout << ans << endl ;
    
    return 0 ;
}

// QQQQAAQQQQQAQAQAQAAAQ
//
