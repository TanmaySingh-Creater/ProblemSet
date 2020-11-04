#include <bits/stdc++.h>
 
using namespace std ;
using bigint = long long int ;

bigint getCount( bigint N , bigint M , bigint K ){
    bigint ans = 0 ;
    for( int i = 1 ; i <= N ; i++ ){
        ans = ans + min( M , K / i ) ;
    }
    return ans ;
}
 
 
int main(){
    bigint N , M , K ; cin >> N >> M >> K ;
    
    bigint L = 1 , R = N * M ;
    while( L < R ){
        bigint mid = ( R - L ) / 2 + L ;
        if( getCount(N, M, mid) < K )
            L = mid + 1 ;
        else
            R = mid ;
    }
    cout << L << endl ;
    return 0 ;
}
 