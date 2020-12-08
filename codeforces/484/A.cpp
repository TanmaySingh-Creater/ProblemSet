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
    int T ; cin >> T ;
    while( T-- ){
        bigint L , R ; cin >> L >> R ;
        int i = 0 ;
        while( ( L | ( 1LL << i ) ) <= R ){
            L = L | ( 1LL << i ) ;
            i++ ;
        }
        cout << L << endl ;
    }
    return 0 ;
}


