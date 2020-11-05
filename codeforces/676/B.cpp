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


double dp[15][15] ;
int main(){
    FAST_IO ;
    int N , T ; cin >> N >> T ;
    dp[1][1] = T ;
    int ans = 0 ;
    for( int i = 1 ; i <= N ; i++ ){
        for( int j = 1 ; j <= i ; j++ ){
            if( dp[i][j] >= 1. ){
                ans++ ;
                dp[i+1][j] += ( dp[i][j] - 1 ) / 2. ;
                dp[i+1][j+1] += ( dp[i][j] - 1 ) / 2. ;
            }
        }
    }
    cout << ans << endl ;
    return 0 ;
}