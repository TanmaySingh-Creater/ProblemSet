//sapnu puas
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

string txt = "2020" ;

int main(){
    NFS ;
    int T ; cin >> T ;
    while( T-- ){
        int N ; cin >> N ;
        string str ; cin >> str ;
        int cnt = 0 ;
        for( int i = 0 ; i < 4 ; i++ ){
            if( str[i] != txt[i] )
                break ;
            cnt++ ;
        }
        for( int i = N - 1 , j = 3 ; i >= 0 && j >= 0 ; i-- , j--){
            if( str[i] != txt[j] )
                break ;
            cnt++ ;
        }
        if( cnt >= 4 )
            cout << "yes" << endl ;
        else
            cout << "no" << endl ;
    }
    return 0 ;
}


