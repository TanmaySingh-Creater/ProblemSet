//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <map>
#include <cstdio>
#include <iterator>
#include <string>
#include <stack>
#include <set>
#include <unordered_set>
#include <unordered_map>
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

typedef long long  int  bigint ;

using namespace std ;


bool isPossible( string str1 , string str2 , int arr[] , int K ){
    int j = 0 ;
    for( int i = 0 ; i < K ; i++ ){
        str1[arr[i]-1] = '-' ;
    }
    for( int i = 0 ; i < str1.length() && j < str2.length() ; i++ ){
        if( str1[i] == '-')
            continue ;
        if( str1[i]== str2[j] )
            j++ ;
    }
    return j == str2.length() ;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    string str1 , str2 ; cin >> str1 >> str2 ;
    int N = str1.length() ;
    int arr[N] ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i];
    
    int low = 0 , high = N , ans = 0 ;
    while( low <= high ){
        int mid = low + ( high - low ) / 2 ;
        if( isPossible(str1, str2, arr, mid) ){
            ans = mid ; low = mid + 1 ;
        }
        else{
            high = mid - 1 ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
