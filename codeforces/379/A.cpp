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
    
    int a , b ;
    cin >> a >> b ;
    int sum = a ;
    while(a >= b)
    {
        sum += a/b  ;
        a = a/b + a%b;
    
    }
    cout << sum <<endl;
    return 0 ;
}
