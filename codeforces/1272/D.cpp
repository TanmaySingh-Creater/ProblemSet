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

bool flag ;
bool isPossible( int arr[] , int N , int K ){
    int cnt = 0 ;
    for( int i = 1 ; i < K ; i++ ){
        if( arr[i] > arr[i-1] )
            continue ;
        cnt++ ;
    }
//    cout << cnt << endl ;
    int ans = cnt ;
    for( int i = K ; i < N ; i++ ){
        if( arr[i] <= arr[i-1] )
            cnt ++ ;
        if( arr[i-K] >= arr[i-K+1] )
            cnt-- ;
//        cout << cnt << endl ;
        ans = min( ans , cnt ) ;
    }
    if( ans == 1 )
        flag = true ;
    return ans <= 1 ;
}


int main(){
    FAST_IO ;
    int N ; cin >> N ;
    int arr[N+1] , ans = 1 ;
    for( int i = 0 ; i < N ; i++ )
        cin >> arr[i] ;
    int left[N+1] , right[N+1] ;
    left[0] = right[N-1] = 1 ;
    
    for( int i = 1 ; i < N ; i++ ){
        left[i] = 1 ;
        if( arr[i-1] < arr[i] )
            left[i] += left[i-1] ;
        ans = max( ans , left[i] ) ;
    }
    
    for( int i = N - 2 ; i >= 0 ; i-- ){
        right[i] = 1 ;
        if( arr[i] < arr[i+1] )
            right[i] += right[i+1] ;
        ans = max( ans , right[i] ) ;
    }
    
    for( int i = 0 ; i < N - 2 ; i++ ){
        if( arr[i] < arr[i+2] ){
            ans = max( ans , left[i] + right[i+2] ) ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}

