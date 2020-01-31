#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 4000000
using namespace std ;

int main()
{
    int N ;
    cin >> N ;
    int arr[N] ;
    int temp[N] ;
    for( int i = 0 ; i < N ; i ++ )
    {
        cin >> arr[i] ;
        temp[i] = arr[i] ;
    }
    sort( arr , arr + N );
    int pos1 = INT_MAX , pos2 = N-1 ;
    
    for( int i = 1 ; i < N ; i++ )    //to find first breakpoint
    {
        if( temp[i] < temp[i-1] )
        {
            pos1 = i - 1 ;
            break ;
        }
    }
    if( pos1 == INT_MAX )      //increasing array
    {
        cout << "yes"<< endl;
        cout << 1 << " " << 1 << endl;
        return 0 ;
    }
    
    for( int i = pos1 ; i < N-1; i++ )   // to find seoncd  breakpoint
    {
        if( temp[i + 1] > temp[i])
        {
            pos2 = i ;
            break ;
        }
    }
    
    if( pos2 == N-1 && temp[N-1] > temp[pos1 - 1 ])  //
    {
        cout << "yes "<<endl;
        cout << pos1 + 1 <<" "<< N <<endl;
        return 0 ;
    }
    for( int j = pos2 + 1 ; j < N - 1 ; j++ )
    {
        if( temp[j + 1] < temp[j] )
        {
            cout << "no"<<endl;
            return 0 ;
        }
    }
    
    
    int k = 0 ;
    for( int j = pos1 ; j <= pos2 ; j++ )
    {
        if( temp[j] != arr[pos2-k] )
        {
            cout << "no"<<endl;
            return 0 ;
        }
        k++ ;
    }
    cout << "yes" << endl;
    cout << pos1 + 1<< " "<< pos2 + 1 << endl;
    return 0 ;
}

