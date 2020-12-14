#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define NFS  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define deb(x) cout << #x << " " << x << endl ;
#define PI 3.14159265358979323846264338327

using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;
int dp[2000002] ;
int generator( int N ){
    if( N < 10 )
        return N ;
    if( dp[N] != -1 )
        return dp[N] ;
    int nums = 1 ;
    while( N > 0 ){
        nums = nums * max( 1 , N % 10 ) ;
        N /= 10 ;
    }
    return dp[N] = generator(nums) ;
}
vi adj[10] ;
int main(){
    NFS ;
    memset(dp, -1, sizeof(dp)) ;
    for( int i = 1 ; i <= 1e6 ; i++ ){
        int x = generator(i) ;
        adj[x].push_back(i) ;
    }
    int T ; cin >> T ;
    while( T-- ){
        int L , R , K ; cin >> L >> R >> K ;
        cout << upper_bound(adj[K].begin(), adj[K].end(), R ) - lower_bound(adj[K].begin(), adj[K].end(), L ) << endl ;
    }
    return 0 ;
}


