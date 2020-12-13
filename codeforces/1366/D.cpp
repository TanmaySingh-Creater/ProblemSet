#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define NFS  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define deb(x) cout << #x << " " << x << endl ;
#define PI 3.14159265358979323846264338327

using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;

int spf[10000007] ;

void div(){
    for( int i = 1 ; i <= 1e7 ; i++ )
        spf[i] = i ;
    for( int i = 2 ; i * i <= 1e7 ; i++ ){
        if( spf[i] == i ){
        for( int j = 2 * i ; j <= 1e7 ; j += i )
            spf[j] = i ;
        }
    }
}
void primeFactorization( int N , vi &v ){
    while( N != 1 ){
        v.push_back(spf[N]) ;
        N /= spf[N] ;
    }
}
bigint div1[500005] , div2[500005] ;
int main(){
    NFS ;
    div() ;
    int N ; cin >> N ;
    for( int i = 1 ; i <= N ; i++ ){
        int x ; cin >> x ;
        vi v ;
        primeFactorization(x,v) ;
        if( v.front() == v.back() )
            div1[i] = div2[i] = -1 ;
        else{
            div1[i] = div2[i] = 1 ;
            reverse(v.begin(), v.end() ) ;
            int d = v[0] ;
            for( auto x : v ){
               if( x == d )
                   div1[i] = x ;
                else
                    div2[i] *= x ;
            }
        }
    }
    for( int i = 1 ; i <= N ; i++ )
        cout << div1[i] << " " ;
    cout << endl ;
    for( int i = 1 ; i <= N ; i++ )
        cout << div2[i] << " " ;
    cout << endl ;
    return 0 ;
}
