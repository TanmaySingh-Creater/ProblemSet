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
#define mod 100000000
 
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
typedef long long int bigint ;
using namespace std;
int arr[300001] ;
int treeNode[3000001] ;
void buildTree( int arr[] , int start , int end , int idx , bool parity ){
    if( start == end ){
        treeNode[idx] = arr[start] ;
        return ;
    }
    int mid = ( start + end ) / 2 ;
    buildTree(arr, start, mid, 2 * idx, !parity) ;
    buildTree(arr, mid + 1, end, 2 * idx + 1,!parity ) ;
    if( parity == 0 ){
        treeNode[idx] = treeNode[2*idx] | treeNode[2*idx+1] ;
    }
    else
        treeNode[idx] = treeNode[2*idx] ^ treeNode[2*idx+1] ;
}
void updateTree(int idx , int value , int curr , int start , int end , bool parity ){
    if( start == end ){
        arr[start] = value ;
        treeNode[curr] = value ;
        return ;
    }
    int mid = ( start + end ) / 2 ;
    if( idx > mid )
        updateTree(idx, value, 2 * curr + 1 , mid + 1 , end , !parity ) ;
    else
        updateTree(idx, value, 2 * curr , start , mid , !parity ) ;
    
    if( parity == 0 ){
        treeNode[curr] = treeNode[2*curr] | treeNode[2*curr+1] ;
    }
    else
        treeNode[curr] = treeNode[2*curr] ^ treeNode[2*curr+1] ;
}
int main(){
    FAST() ;
    int N , M ; cin >> N >> M ;
    int L = ( 1 << N ) ;
    for( int i = 0 ; i < L ; i++ )
        cin >> arr[i] ;
    int A = log2(L) ; bool flag = false ;   // OR
    if( A % 2 == 0 )
        flag = true ; // XOR
    buildTree(arr, 0, L - 1, 1 , flag) ;
    while( M-- ){
        int P , B ; cin >> P >> B ;
        updateTree(P-1 ,B ,1 , 0 , L - 1 , flag ) ;
        cout << treeNode[1] << endl ;
    }
    return 0 ;
}
