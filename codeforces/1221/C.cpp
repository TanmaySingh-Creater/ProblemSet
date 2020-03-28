//
//  CPlibrary
//
//  Created by Tanmay Singh on 21/12/19.
//  Copyright © 2019 Tanmay Singh. All rights reserved.
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>
#include <string>
#include <stack>
#include <deque>
#include <unordered_set>
#include <unordered_map>
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 100000000
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;

using namespace std ;

bool isPossible( int coders , int mathematicians , int chahiye  ){
    if( mathematicians - chahiye  < 0 || coders - chahiye < 0 ){
        return false ;
    }
    if( coders + mathematicians >= 3 * chahiye ){
        return true ;
    }
    return false ;
}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int Q ; cin >> Q ;
    while( Q -- ){
        int coders , mathematicians , noobs; cin >> coders >> mathematicians >> noobs;
        int team_with_noobs = min( { noobs , mathematicians , coders } ) ;
        coders -= noobs ; mathematicians -= noobs ;
        int low = 0 , ans = 0 , high = MAX ;
        while( low <= high ){
            int mid = low + ( high - low ) / 2 ;
            if( isPossible(coders, mathematicians, mid) ){
                ans = mid ;
                low = mid + 1 ;
            }
            else{
                high = mid - 1 ;
            }
        }
        cout << ans + team_with_noobs << endl ;
   }
    return 0 ;
}
