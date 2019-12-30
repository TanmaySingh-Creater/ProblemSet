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
    
    int T ;
    cin >> T ;
    int arr[T];
    for( int i = 0 ; i < T ; i++)
    {
        int a , b , c ;
        cin >> a >> b >> c ;
        arr[i] = a + b + c;
    }
    int count = 0 ;
    for( int i = 0 ; i < T ; i++)
    {
        if( arr[i] >1 )
            count++;
    }
    cout << count <<endl;
    return 0 ;
}
