#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FAST_IO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define PI 3.14159265358979323846264338327950288
using namespace std ;
struct point{
    int x , y ;
    long double a ;
    int pos ;
} ;
bool cmp( point a  , point b ){
    return a.a < b.a ;
}
inline bool up (point p) {
  return p.y > 0 or (p.y == 0 and p.x >= 0);
}

//sort(v.begin(), v.end(), [] (point a, point b) {
//  return up(a) == up(b) ? a.x * b.y > a.y * b.x : up(a) < up(b);
//});
int main(){
    FAST_IO ;
    int N ; cin >> N ;
    point arr[N+1] ;
    for( int i = 0 ; i < N ; i++ ){
        int x , y ; cin >> x >> y ;
        arr[i].x = x ;
        arr[i].y = y ;
        arr[i].a = atan2(y*1.0, x*1.0) < 0 ? atan2(y*1.0, x*1.0) + 2 * PI : atan2(y*1.0, x*1.0) ;
        arr[i].pos = i + 1 ;
    }
    sort(arr, arr + N ,cmp) ;
    int ans1 = arr[0].pos , ans2 = arr[N-1].pos ;
    long double angle = arr[0].a - arr[N-1].a + 2 * PI  ;
    for( int i = 1 ; i < N ; i++ ){
        if( arr[i].a - arr[i-1].a < angle ){
            ans1 = arr[i].pos ; ans2 = arr[i-1].pos ;
            angle = arr[i].a - arr[i-1].a ;
        }
    }
    cout << ans1 << " " << ans2 << endl ;
    return 0 ;
}

