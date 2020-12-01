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
    
    string str ; cin >> str ;
    
    int cnt = 0 ;
    
    for( int i = 0 ; i < N ; i += 2 ){
        if( str[i] == 'a' && str[i+1] == 'a' ){
            str[i] = 'b' ;
            cnt++ ;
        }
        else if( str[i] == 'b' && str[i+1] == 'b' ){
            cnt++ ;
            str[i] = 'a' ;
        }
    }
    
    cout << cnt << endl << str << endl ;
    return 0 ;
}
