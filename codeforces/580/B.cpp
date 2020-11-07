#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define deb(x) cout << #x << " " << x << endl ;
#define PI 3.14159265358979323846264338327
#include <vector> 
using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;

bigint pref[100005] ;



int main(){
    FAST_IO ;
    int N , M ; cin >> N >> M ;
    vector<pair<int, int>> v ( N ) ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> v[i].first >> v[i].second ;
    }
    sort( v.begin() , v.end() ) ;
    
    pref[0] = v[0].second ;
    for( int i = 1 ; i < N ; i++ ){
        pref[i] = pref[i-1] + v[i].second ;
    }
  
    bigint ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        pair<int, int> p = { v[i].first + M , -10000} ;
        auto idx = lower_bound(v.begin(), v.end(), p ) - v.begin() ;
        if( i == 0 ){
            ans = max( ans , pref[idx-1] ) ;
        }
        else
            ans = max( ans , pref[idx-1] - pref[i-1] ) ;
    }
    cout << ans << endl ;
    return 0 ;
}
