#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<bool>sieve(1000001 , 1);
    
    sieve[0] = 0 ;
    sieve[1] = 0 ;
    map < long long int , bool > tprimes;
    for( long long int  i = 2 ; i*i < 1000001 ; i++)
    {
        if( sieve[i] )
        {
            for( long long int j = i*i ; j <= 1000001 ; j += i)
            {
                sieve[j] = false ;
            }
        }
    }
    tprimes[4] = true ;
    
    for( int j = 3 ; j < 1000001 ; j+=2 )
    {
        if( sieve[j] )
        {
            tprimes[(long long int)j * j] = true ;
        }
    }
    
    

    long long int  T ;
    cin >> T ;
    long long int N;
    while( T--)
    {
        cin >> N ;
        if(tprimes[N])
           {
            cout << "YES"<<"\n";
        }
           else
           cout << "NO"<<"\n";
    }
    
    
    
    return 0 ;
}