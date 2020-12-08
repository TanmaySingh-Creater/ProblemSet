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
    int N ; cin >> N ;
    vi arr( N , 0 ) ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    int ans = 0 ;
    
    
    for( int i = 1 ; i <= 30 ; i++ ){
        int sum = 0 ;
        for( int j = 0 ; j < N ; j++ ){
            if( arr[j] > i ){
                sum = 0 ;
                continue ;
            }
            sum += arr[j] ;
            sum = max( sum , 0 ) ;
            ans = max( ans , sum - i ) ;
            
        }
    }
    
    cout << ans << endl ;
    
    return 0 ;
}
 
 