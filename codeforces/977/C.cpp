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
#define MAX 1000000
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;

using namespace std ;
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int N , K ; cin >> N >> K ;int arr[N] ;
    for (int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    sort(arr , arr + N );
    int ans;
    if (K == 0) {
        ans = arr[0] - 1;
    } else {
        ans = arr[K - 1];
    }
    int count = 0;
    for (int i = 0; i < N; i++ ){
        if (arr[i] <= ans){
            count ++ ;
        }
    }
    if (count != K || !(1 <= ans && ans <= 1000 * 1000 * 1000)) {
        cout << "-1" << endl ;
        return 0;
    }
    
    cout << ans << endl ;
    
    return 0 ;
}
