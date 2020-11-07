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
        int N , K ; cin >> N >> K ;
        string str ; cin >> str ;
        bool flag = true ;
        int z = 0 , o = 0 ;
        for( int i = 0 ; i < K ; i++ ){
            char ch = '.' ;
            for( int j = i ; j < N ; j += K ){
                if( str[j] != '?' ){
                    if( ch != '.' && ch != str[j] ) {
                        flag = false ;
                        break ;
                    }
                    ch = str[j] ;
                }
            }
            if( ch != '.' && ch == '1' )
                o++ ;
            if( ch != '.' && ch == '0' )
                z++ ;
        }
        if( max( z , o ) > K / 2 )
            flag = false ;
        if( flag )
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;
    }
    return 0 ;
}
