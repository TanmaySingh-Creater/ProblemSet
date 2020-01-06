#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    int n , m ;
    cin >> n >> m ;
    int arr[m];
    for( int i = 0 ; i < m ; i++ )
    {
        cin >> arr[i] ;
    }
    sort( arr , arr + m );
   
    int minimum = INT_MAX;
    int last_index = m-n+1 ;
    int ans = 0 ;
    for( int i = 0 ; i < last_index ; i++)
    {
        int difference = arr[i+n-1] - arr[i];
        if( difference < minimum)
        {
            ans = i ;
            minimum = difference ;
        }
        
    }
    cout << minimum <<endl;
    return 0 ;
   
}
