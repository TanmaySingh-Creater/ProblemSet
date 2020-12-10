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
    NFS ;
    int T ; cin >> T ;
    while( T-- ){
        string str ; cin >> str ;
        int freq[256] = { 0 } ;
        for( char x : str )
            freq[x]++ ;
        string ans1 , ans2 ;
        for( char ch = 'b' ; ch <= 'z' ; ch += 2 ){
            for( int i = 0 ; i < freq[ch] ; i++ ){
                ans1 += ch ;
            }
        }
        for( char ch = 'a' ; ch <= 'z' ; ch += 2 ){
            for( int i = 0 ; i < freq[ch] ; i++ )
                ans2 += ch ;
        }
        bool flag = true ;
        if( ans1.empty() || ans2.empty() ){
            cout << ans1 << ans2 << endl ;
            continue ;
        }
            if( abs( ans1.back() - ans2[0] ) == 1 && abs( ans2.back() - ans1[0]) == 1 ){
                flag = false ;
            }
            else if( abs( ans1.back() - ans2[0] ) != 1 ){
                cout << ans1 << ans2 << endl ;
            }
            else{
                cout << ans2 << ans1 << endl ;
            }
    
            if( !flag )
                cout << "No answer" << endl ;
    }
    return 0 ;
}
