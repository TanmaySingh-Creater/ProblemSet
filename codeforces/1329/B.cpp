#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define PI 3.14159265358979323846264338327950288
 
using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;
 

int main(){
    FAST_IO ;
    int T ; cin >> T ;
    while( T-- ){
        bigint D , M ; cin >> D >> M ;
        bigint ans = 1 ;
        for( int i = 0 ; i < 32 && ( D >= ( 1LL << i ) ) ; i++ ){
            ans = ans * ( min( (1LL << ( i + 1 ) ) - 1 , D ) - ( 1LL << i ) + 2 ) % M ;
        }
        cout << ( ans - 1 + M ) % M << endl ;
    }
    return 0 ;
    
}
 
