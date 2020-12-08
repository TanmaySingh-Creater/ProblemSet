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


int prev_max[2000005] , arr[2000005] ;
set<int> s ;
int main(){
    FAST_IO ;
    int N ; cin >> N ;
    int  ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        int x ; cin >> x ;
        arr[x] = x ;
    }
    for( int i = 1 ; i <= 2e6 + 1 ; i++ ){
        prev_max[i] = max( arr[i] , prev_max[i-1] ) ;
    }
    
    for( int i = 0 ; i <= 2e6 ; i++ ){
        if( arr[i] ){
            for( int j = 2 * i ; j < 2e6 + 5 ; j += i ){
                ans = max( ans , prev_max[j-1] % i ) ;
            }
        }
    }
    
    cout << ans << endl ;
    return 0 ;
}
