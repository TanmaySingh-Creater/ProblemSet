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
    
    int num , T ;
    cin >> num >> T ;
    
    while( T-- )
    {
        if( num % 10 != 0)
        {
            num -= 1;
        }
        else
            num = num /10;
    }
    cout << num ;
    return 0 ;
}
