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

#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n , min_height;
    cin >> n >> min_height;
    int k , count = 0 ;
    for( int i = 0 ; i < n ; i ++)
    {
        cin >> k ;
        if( k > min_height)
        {
            count += 2;
        }
        else{
        count++;
        }
    }
    cout << count <<endl;
    
    return 0 ;
}

