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

bigint gcd( bigint a , bigint b ){
    if( b == 0 )
        return a ;
    return gcd( b , a % b ) ;
}
int main(){
    FAST_IO ;
    int N ; cin >> N ;
    bigint arr[N+1] , ma = 0 , sum = 0 ;
    
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
        ma = max( ma , arr[i] ) ;
    }
    bigint A = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        A = gcd( A , ma - arr[i] ) ;
        sum = sum + ( ma - arr[i] ) ;
    }
    cout << sum / A << " " << A << endl ;
    
    return 0 ;
}


