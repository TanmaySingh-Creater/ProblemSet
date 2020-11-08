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

string pattern = "abacaba" ;
 int L = ( int ) pattern.length() ;
bool containsString( string &str ){
    int cnt = 0 ;
    int N = ( int ) str.length() ;
    for( int i = 0 ; i < N - L + 1 ; i++ ){
        int j = 0 ;
        for( j = 0 ; j < L ; j++ ){
            if( str[i+j] != pattern[j] )
                break ;
        }
        if( j == L )
            cnt++ ;
    }
    return ( cnt == 1 ) ;
}



int main(){
    FAST_IO ;
    int T ; cin >> T ;
    while (T-- ){
        int N ; cin >> N ;
        string str ; cin >> str ;
        if( N < L ){
            cout << "No" << endl ;
            continue ;
        }
        if( containsString(str) ){
            cout << "Yes" << endl ;
            for( int i = 0 ; i < N ; i++ ){
                if( str[i] != '?' )
                    cout << str[i] ;
                else
                    cout << 'd' ;
            }
            cout << endl ;
            continue ;
        }
        int ans = -1 ;
        for( int i = 0 ; i < N - L + 1 ; i++ ){
            bool flag = true ;
            string S = str ;
            for( int j = 0 ; j < L ; j++ ){
                if( S[i+j] != '?' && S[i+j] != pattern[j] ){
                    flag = false ;
                    break ;
                }
                else
                    S[i+j] = pattern[j] ;
            }
            if( flag && containsString(S) ){
                cout << "Yes" << endl ;
                for( int i = 0 ; i < N ; i++ ){
                    if( S[i] != '?' )
                        cout << S[i] ;
                    else
                        cout << 'd' ;
                }
                cout << endl ;
                ans = 1 ;
                break ;
            }
        }
        if( ans == -1 )
            cout << "No" << endl ;
    }
    return 0 ;
}
