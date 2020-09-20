#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define PI 3.14159265358979323846264338327950288
 
using namespace std ;
using bigint = long long int ;
using vi = vector<int> ;
using vll = vector<long long int> ;

int pref[1000075] ;
int main(){
    FAST_IO ;
    int A , B , C , D ; cin >> A >> B >> C >> D ;
    for( int i = A ; i <= B ; i++ ){
        pref[i+B]++ ;
        pref[i+C+1]-- ;
    }
    for( int i = A + B ; i <= B + C  ; i ++ ){
        pref[i] += pref[i-1] ;
//        cout << pref[i] << " " ;
    }
    bigint ans = 0 ;
    for( int i = A + B ; i <= B + C ; i++ ){
        if( i > C ){
            ans += (bigint)pref[i] * min( i - C , D - C + 1) ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
 
 