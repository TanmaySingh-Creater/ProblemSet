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

vi adj[200005] ;
bool visited[200005] ;
int indegree[200005] ;
bool flag ;
void dfs( int v ){
    visited[v] = 1 ;
    if( indegree[v] != 2 )
        flag = false ;
    for( int u : adj[v] ){
        if( !visited[u] ){
            dfs(u) ;
        }
    }
}


int main(){
    FAST_IO ;
    int N , M ; cin >> N >> M ;
    
    for( int i = 1 ; i <= M ; i++ ){
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y) ;
        adj[y].push_back(x) ;
        indegree[x]++ ;
        indegree[y]++ ;
    }
    int ans = 0 ;
    for( int i = 1 ; i <= N ; i++ ){
        if( !visited[i] ){
            flag = true ;
            dfs( i ) ;
            if( flag )
                ans++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
