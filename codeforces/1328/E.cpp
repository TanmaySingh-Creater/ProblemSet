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
 
vi adj[200005] ;
int timer = 0 , inTime[200005] , outTime[200005] ;
int dist[200005] ;
int parent[200005] ;
void dfs( int v , int d = 0 , int par = -1 ){
    dist[v] = d ;
    inTime[v] = timer++ ;
    parent[v] = par ;
    for( int u : adj[v] ){
        if( u != par )
            dfs(u , d + 1 , v) ;
    }
    outTime[v] = timer++ ;
}


int main(){
    FAST_IO ;
    
    int N , K ; cin >> N >> K ;
    for( int i = 1 ; i <= N - 1 ; i++ ){
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y) ;
        adj[y].push_back(x) ;
    }
    
    dfs(1) ;
    
    while( K-- ){
        int n ; cin >> n ;
        vi v ( n , 0 ) ;
        int depth = 0 , node = 0 ;

        for( int &x : v ){
            cin >> x ;
            if( depth < dist[x] ){
                node = x ;
                depth = dist[x] ;
            }
        }
        if( n == 1 ){
            cout << "YES" << endl ;
            continue ;
        }
        for( int &x : v ){
            if( x != 1 && x != node ){
                x = parent[x] ;
            }
        }
      
        bool flag = true ;
        for( int &x : v ){
            if( x == node )
                continue ;
            if( inTime[node] < inTime[x] || outTime[node] > outTime[x] )
                flag = false ;
        }
        
        if( flag )
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    
    
    
    
    
    return 0 ;
}
 
//3 2 1 5
