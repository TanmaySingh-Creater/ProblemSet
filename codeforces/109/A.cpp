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
#include <string>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>


#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 100001
typedef long long  int  bigint ;
using namespace std;


void permute ( string a , int l , int r ){
    
    if( l == r ){
        cout << a << endl ;
    }
    else
        for( int i = l ; i <= r ; i++ ){
            swap( a[l] , a[i] ) ;
            permute ( a , l + 1 , r );
            swap( a[l] , a[i] );   //backtracking
        }
    
}





int main(){
    
   // 4 + 4 + 4 + 7
    int N ;
    cin >> N ;
    int seven = 0 ;
    int four = 0 ;
    while( N > 0 ){
        if( N % 7 == 0 ){
            seven++ ;
            N -= 7 ;
        }
        else if( N % 4 == 0 ){
            four ++ ;
            N -= 4 ;
        }
        else{
            N -= 4 ;
            four++ ;
        }
    }
    if( N < 0 ){
        cout <<"-1"<<endl;
    }
    else
    {
        for( int i = 0 ; i < four ; i++ ){
            cout << "4";
        }
        for(int i = 0 ; i < seven ; i++ ){
            cout << "7";
        }
        cout << endl ;
        
        
    }
    return 0 ;
}
// 4 7 44 47 74 77 444 447 477 744
