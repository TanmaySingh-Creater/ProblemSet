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
    ios::sync_with_stdio(0);
    int N ;
    cin >> N ;
    if( N < 3 )
    {
        cout <<"0"<<endl;
        return 0 ;
    }
    bigint arr[N] ;
    bigint sum = 0 ;
    for( int i = 0 ; i < N ; i++ )
    {
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    if( sum % 3 != 0 )
    {
        cout << "0" << endl;
        return 0 ;
    }
    bigint pre_sum = 0 ;
    bigint ans = 0 ;
    bigint count = 0 ;
    sum = sum / 3;
    for( int i = 0 ; i < N - 1 ; i++ )
    {
        pre_sum += arr[i] ;
        if( pre_sum == 2*sum)
        {
            ans = ans + count ;
        }
        if( pre_sum == sum  )
        {
            count ++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}

