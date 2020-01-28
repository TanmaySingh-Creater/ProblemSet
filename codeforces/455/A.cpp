/*____________________________________________
 TANMAY SINGH
 INDIAN INSTITUTE OF TECHNOLOGY(BHU), VARANASI
 
 ______________________________________________*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <cstring>
#define  mod 1000000007
typedef long long int bigint ;
using namespace std;

int main(){
    int N ;
    cin >> N ;
    bigint dp[100001] ;
    bigint count[100001] ;
    memset( count , 0 , sizeof(count ));
    memset( dp , 0 , sizeof(dp)) ;
    int k ;
    for( int i = 0 ; i < N ; i++ )
    {
        cin >> k ;
        count[k] ++ ;
    }
    dp[0] = 0 ;
    dp[1] = count[1] ;
    
    for( int i = 2 ; i < 100001 ; i++ )
    {
        dp[i] = max ( dp[i-1] , i*count[i] + dp[i-2]) ;
    }
    cout << dp[100000] <<endl;
    return 0 ;
}

