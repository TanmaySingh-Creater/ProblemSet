#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define deb(x) cout << #x << " " << x << endl ;
#define PI 3.14159265358979323846264338327

using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;


int main(){
    FAST_IO ;
    int T ; cin >> T ;
    while( T-- ){
        string str ; cin >> str ;
        int N = ( int ) str.length() ;
        int ans = 1 ;
        for( char x = '0' ; x <= '9' ; x++ ){
            for( char y = '0' ; y <= '9' ; y++ ){
                bool flag = true ; int cnt = 0 ;
                for( int i = 0 ; i < N ; i++ ){
                    if( str[i] == x && flag ){
                        cnt++ ;
                        flag = !flag ;
                    }
                    else if( str[i] == y && !flag ){
                        cnt++ ;
                        flag = !flag ;
                    }
                }
                if( cnt % 2 && x == y )
                    ans = max( ans , cnt ) ;
                else if( cnt % 2 == 0 )
                    ans = max( ans , cnt ) ;
            }
        }
        cout << N - ans << endl ;
    }
    return 0 ;
}
// 1 3 5 7   0 2 6 8 9
// 0 1 3 7   5 2 6 8 9
