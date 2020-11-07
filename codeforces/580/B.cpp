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
    int N , M ; cin >> N >> M ;
    vector<pair<int, int>> v ( N ) ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> v[i].first >> v[i].second ;
    }
    
    sort( v.begin() , v.end() ) ;
    
    bigint ans = 0 , sum = 0 ;
    
    int currMin = v[0].first ;
    
    for( int i = 0 , j = 0 ; i < N ; i++ ){
        sum = sum + v[i].second ;
        while( currMin + M <= v[i].first ){
            sum -= v[j].second ;
            j++ ;
            currMin = v[j].first ;
        }
        ans = max( ans , sum ) ;
    }
    
    cout << ans << endl ;
    
    return 0 ;
}
