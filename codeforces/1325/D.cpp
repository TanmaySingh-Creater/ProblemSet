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
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;
 
using namespace std ;
 
    int main()
    {
        FAST();
        bigint u , v ;
        cin >> u >> v ;
        if (u % 2 != v % 2 || u>v)
        {
            cout << -1 << endl ;
            return 0;
        }
        if ( u == v )
        {
            if ( !u )
                cout << 0 << endl ;
            else
                cout << 1 << endl << u << endl ;
            return 0;
        }
        bigint x = ( v - u ) / 2;
        if ( u & x )
            cout << 3 << endl << u << " "<< x  << " " << x << endl ;
        else
            cout << 2 << endl << (u ^ x) << " "<< x << endl ;
        
        
        return 0 ;
    }
