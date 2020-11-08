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
    while (T-- ){
    bigint A , B ; cin >> A >> B ;
    if( A > B )
        swap(A, B) ;
    bigint diff = 0 ;
    bigint i ;
    for( i = 0 ; ; i++ ){
        if( i * ( i + 1 ) / 2 >= ( B - A) ){
            diff = A - B + ( i * ( i + 1 ) ) / 2 ;
            break ;
        }
    }
    
    if( diff % 2 == 0 ){
        cout << i << endl ;
        continue ;
    }
    else{
        diff += i + 1 ;
        if( diff % 2 == 0 )
            cout << i + 1 << endl ;
        else
            cout << i + 2 << endl ;
    }
    }
    return 0 ;
}
