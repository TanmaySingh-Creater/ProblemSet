#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#define MAX 4000000
using namespace std ;

int main()
{
    string str ;
    cin >> str ;
    long long int N  = str.size() ;
    int ans = (1 << N) - 2 ;
    int k = 0 ;
    for( int i = N-1 ; i >=0 ; i-- )
    {
        if( str[i] == '7' )
        {
            ans += (1 << k ) ;
        }
        k++ ;
    }
    cout << ans + 1 <<endl;
    return 0  ;
}


