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


set<int> s ;

void getPrimeDivisors( int N ){
    for( int i = 2 ; i * i <= N ; i++ ){
        if( N % i == 0 ){
            s.insert(i) ;
            while( N % i == 0 ){
                N /= i ;
            }
        }
    }
    if( N > 1 )
        s.insert(N) ;
}

bigint power( bigint A , bigint B , bigint md = mod ){
    bigint ans = 1 ;
    A %= md ;
    while( B > 0 ){
        if( B & 1 )
            ans = ( (ans % md) * (A % md) ) % md ;
        A = ( (A % md) * (A % md) ) % md ;
        B >>= 1 ;
    }
    return ans ;
}
int freq[200005] ;
int main(){
    FAST_IO ;
    map<int, int> m ;
    int N ; cin >> N ;
    int arr[N+1] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
        m[arr[i]]++ ;
    }
    bigint ans = 1 ;
    
    for( int i = 2 ; i <= 2e5 ; i++ ){
        for( int j = i ; j <= 2e5 ; j += i ){
            freq[i] += m[j] ;
        }
    }
    for( int i = 0 ; i < N ; i++ ){
        getPrimeDivisors(arr[i]) ;
    }
    
    for( auto x : s ){
        int first_min = INT_MAX , second_min = INT_MAX ;
        if( freq[x] < N - 1  ){
            continue ;
        }
        for( int i = 0 ; i < N ; i++ ){
            int n = arr[i] , counter = 0 ;
            while( n % x == 0 ){
                counter++ ;
                n /= x ;
            }
            if( counter < first_min ){
                second_min = first_min ;
                first_min = counter ;
            }
            else if( counter < second_min ){
                second_min = counter ;
            }
        }
        ans = ans * power(x, second_min) ;
        
    }
    
    cout << ans << endl ;
    
    
    
    return 0 ;
}
