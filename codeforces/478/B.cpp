//
//  CPlibrary
//
//  Created by Tanmay Singh on 21/12/19.
//  Copyright © 2019 Tanmay Singh. All rights reserved.
//
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
 
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
typedef long long  int  bigint ;
 
using namespace std ;
bigint NCTWO( bigint N ){
    return ((N)*( N - 1 ))/2;
}
int main(){
    bigint N , M ;
    cin >> N >> M ;
        
        if( N % M == 0 ){
            cout <<  M *(NCTWO(N / M ))<< " ";
        }
    else
    {
        bigint bada = ceil(double ( N )/M );
        bigint chota = N / M ;
        
        bigint bada_no = N % M ;
        bigint chota_no = M - bada_no ;
       
      
        cout << chota_no * NCTWO(chota) + bada_no * NCTWO(bada )<<" ";
    }
    cout <<NCTWO(N-M+1)<< endl ;
    return 0 ;
}
