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


int b_size , counter ;
bigint val ;
bool cmp(pair<pair<int, int>, int> a , pair<pair<int, int>, int> b ){
    if( a.first.first / b_size == b.first.first / b_size )
        return a.first.second < b.first.second ;
    return a.first.first / b_size < b.first.first / b_size ;
}
bigint cnt[2000005] ;
void add(bigint x){
    val -= cnt[x] * cnt[x] * x ;
    cnt[x]++ ;
    val += cnt[x] * cnt[x] * x ;
    
}
void remove(bigint x ){
    val -= cnt[x] * cnt[x] * x ;
    cnt[x]-- ;
    val += cnt[x] * cnt[x] * x ;
}


int main(){
    FAST_IO ;
    int N , T ; cin >> N >> T ;
    bigint arr[N+1] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    
    vector<pair<pair<int, int>, int>> queries ;
    
    for( int i = 0 ; i < T ; i++ ){
        int L , R ; cin >> L >> R ;
        queries.push_back({{L-1, R-1} , i}) ;
    }
    b_size = ceil(sqrt(N)) ;
    
    sort(queries.begin(), queries.end(), cmp) ;
    
    bigint ans[T+1] ;

    int M_left = 0 , M_right = -1 ;
    for( auto x : queries ){
        int L = x.first.first , R = x.first.second ;
        int idx = x.second ;
        
        while( M_right < R ){
            M_right++ ;
            add(arr[M_right]) ;
        }
        while( M_left > L ){
            M_left-- ;
            add(arr[M_left]) ;
        }
        
        
        while( M_right > R ){
            remove(arr[M_right]) ;
            M_right-- ;
        }
        while( M_left < L ){
            remove(arr[M_left]) ;
            M_left++ ;
        }
        ans[idx] = val ;
    }
    
    for( int i = 0 ; i < T ; i++ )
        cout << ans[i] << endl ;

    return 0 ;
}
