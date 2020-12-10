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
 

int getMEX( vi &v , int N ){
    vi visited( N + 1 , 0 ) ;
    for( int x : v )
        visited[x] = 1 ;
    for( int i = 0 ; i < N ; i++ ){
        if( visited[i] == 0 )
            return i ;
    }
    return N ;
}

int firstUnmatched( vi &v , int N ){
    for( int i = 0 ; i < N ; i++ ){
        if( v[i] != i )
            return i ;
    }
    return 0 ;
}

bool isIncreasing( vi &v , int N ){
    for( int i = 1 ; i < N ; i++ ){
        if( v[i] < v[i-1] )
            return false ;
    }
    return true ;
}

int main(){
    FAST_IO ;
    int T ; cin >> T ;
    while( T-- ){
        int N ; cin >> N ;
        vi v ( N ) , ans ;
        for( int &x : v )
            cin >> x ;
        while( !isIncreasing(v, N) ){
            int mex = getMEX(v, N) ;
            if( mex == N ){
                int idx = firstUnmatched(v, N) ;
                v[idx] = mex ;
                ans.push_back(idx+1) ;
            }
            else{
                v[mex] = mex ;
                ans.push_back(mex+1) ;
            }
        }
        cout << ans.size() << endl ;
        for( auto x : ans )
            cout << x << " " ;
        cout << endl ;
    }
    return 0 ;
    
}
 
