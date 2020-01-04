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
 
    int n , k ;
    cin >> n >> k ;
    int totaltime = 0 ;
    int i ;
    for( i = 1 ; i <= n ; i++ )
    {
        totaltime += 5*i;
        if( totaltime + k > 240)
        {
            cout << i-1 << endl;
            return 0 ;
        }
    }
    cout << i-1<<endl;
    return 0 ;
} // 5 15 30 50 75 105 140 180
