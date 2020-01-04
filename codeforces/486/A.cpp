#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    if( n % 2 == 0 )
    {
        cout << n/2;
        
    }
    else
        cout << "-"<<(n+1)/2<<endl;
    
} // 5 15 30 50 75 105 140 180
