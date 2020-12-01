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
    vector<pair<int, int>> v ( N ) ;
    
    for( int i = 0 ; i < N ; i++ ){
         cin >> v[i].first ;
        v[i].second = i + 1 ;
    }
    
    sort(v.begin(), v.end()) ;
    reverse(v.begin(), v.end()) ;
    int ans = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        ans = ans + (i * v[i].first + 1 ) ;
    }
    cout << ans << endl ;
    for( auto x : v )
        cout << x.second << " " ;
    cout << endl ;
    return 0 ;
}

