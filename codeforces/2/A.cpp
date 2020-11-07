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
    map<string , int> m , val;
    string str[1001] ; int x[1001] ;
    string ans  ; int maxScore = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> str[i] >> x[i] ;
        m[str[i]] += x[i] ;
    }
    for( auto x : m ){
        maxScore = max( maxScore , x.second ) ;
    }
    for( int i = 0 ; i < N ; i++ ){
        val[str[i]] += x[i] ;
        if( m[str[i]] == maxScore && val[str[i]] >= maxScore ){
            ans = str[i] ;
            break ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}