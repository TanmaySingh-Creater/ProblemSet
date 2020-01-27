#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
   
    int n ;
    cin >> n ;
    int arr[n] ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }

    int count[n] ;
    for( int i = 0 ; i < n ; i++ )
    {
        count[i] = 1 ;
    }
    
    int m = 1 ;
    for(int i = 1 ; i < n ; i++ )
    {
        if( arr[i] >= arr[i-1])
        {
            count[i] = count[i-1] + 1 ;
        }
        m = max( m , count[i] );
    }
    cout << m << endl ;
    return 0 ;
}
