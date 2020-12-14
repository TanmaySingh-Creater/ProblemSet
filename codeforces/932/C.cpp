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

int main(){
    int N , A , B ; cin >> N >> A >> B ;
    for( int x = 0 ; x * A <= N ; x++ ){
        if( ( N - x * A ) % B == 0 ){
            for( int i = 0 ; i < x * A ; i++){
                if( i % A == 0 )
                    cout << i + A << " " ;
                else
                    cout << i << " " ;
        }
        for( int i = x * A ; i < N ; i++ ){
                if( ( i - x * A ) % B == 0 )
                    cout << i + B << " " ;
                else
                    cout << i << " " ;
            }
            cout << endl ;
            return 0;
        }
    }
    cout << "-1" << endl ;
    return 0;
}

