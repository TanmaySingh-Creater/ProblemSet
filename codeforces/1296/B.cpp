#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#define mod 1000000007
typedef long long int  bigint ;
using namespace std ;

const int daska[] = { 10 , 100 , 1000 , 10000 , 100000 , 1000000 , 10000000 , 100000000 , 1000000000 } ;

int main()
{
    int T ;
    cin >> T ;
    while( T-- ){
    int paisa ;
    cin >> paisa ;
    int kharcha = 0 ;
    while( paisa != 0 ){
        if( paisa < 10 )
        {
            kharcha += paisa ;
            break ;
        }
        for( int i = 8 ; i >= 0 ; i-- ){
            if( paisa >= daska[i] ){
                paisa = paisa - daska[i] ;
                kharcha += daska[i] ;
                paisa += (daska[i] / 10) ;
                break ;
            }
        }
        
    }
    cout << kharcha << endl;
    }
    return 0 ;
}

