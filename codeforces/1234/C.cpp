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
    int N ; cin >> N ;
    string str ;
    int matrix[3][N+2] ;
    for( int i = 0 ; i < 2 ; i++ ){
        cin >> str ;
        for( int j = 0 ; j < N ; j++ ){
            matrix[i][j] = str[j] - '0' ;
        }
    }
 
    int i = 0 , j = 0  ;
    for( j = 0 ; j < N ; j++ ){
        if( matrix[i][j] > 2 ){
            if( matrix[!i][j] < 3 )
                break ;
            else
                i = !i ;
        }
    }
    if( i == 1 && j == N )
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;
    }
    return 0 ;
}
