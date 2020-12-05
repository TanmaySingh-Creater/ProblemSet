#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 998244353 
#define endl "\n"
#define deb(x) cout << #x << " " << x << endl ;
#define PI 3.14159265358979323846264338327

using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;


int main(){
    FAST_IO ;
    
    int N ; cin >> N ;
    int arr[N+1] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
        
    int last_pos[N+1] ;
    map<int ,int> m ;
    for( int i = N - 1 ; i >= 0 ; i-- ){
       if( m.find(arr[i]) == m.end() )
           m[arr[i]] = i ;
        last_pos[i] = m[arr[i]] ;
    }
    
    int ma = -1 , ans = 1 ;
    
    for( int i = 0 ; i < N - 1 ;i++ ){
        ma = max( ma , last_pos[i] ) ;
        if( ma == i ){
            ans = ( ans * 2 ) % mod ;
        }
    }
    
    cout << ans << endl ;
    
    
    return 0 ;
}

