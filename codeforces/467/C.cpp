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

bigint dp[5005][5001] ;

int main(){
    FAST_IO ;
    int N , M , K ; cin >> N >> M >> K ;
    // size = M
    bigint arr[N+1] ;
    arr[0] = 1 ;
    for( int i = 1 ; i <= N ; i++ ){
        cin >> arr[i] ;
        arr[i] += arr[i-1] ;
    }

    for( int i = 1 ; i <= K ; i++ ){
        for( int j = i * M ; j <= N ; j++ ){
            dp[i][j] = max( dp[i-1][j-M] + arr[j] - arr[j-M] , dp[i][j-1] ) ;
        }
    }
    cout << dp[K][N] << endl ;
    return 0 ;
}


