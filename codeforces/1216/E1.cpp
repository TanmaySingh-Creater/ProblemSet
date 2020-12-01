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
    vll v ;
    v.push_back(0) ;
    for( bigint i = 1 ; i <= 1e5 ; i++ ){
        v.push_back(v[i-1] + log10(i) + 1) ;
    }
    for( int i = 1 ; i <= 1e5 ; i++ )
        v[i] += v[i-1] ;
    int Q ; cin >> Q ;
    
    while( Q-- ){
        int K ; cin >> K ;
        bigint elem = lower_bound(v.begin(), v.end(), K ) - v.begin() ;
        bigint T =  K - v[elem-1] ;
        int pos = 0 ;
        for( int i = 1 ; i <= T ; i++ ){
            pos += ( log10(i) + 1 ) ;
            if( pos >= T ){
                string str = to_string(i) ;
                reverse(str.begin(), str.end()) ;
                cout << str[pos-T] << endl ;
                break ;
            }
        }
    }
    
    return 0 ;
}