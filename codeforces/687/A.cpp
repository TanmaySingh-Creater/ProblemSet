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

bool color[100005] ;
vi adj[100005] ;
bool visited[100005] ;
int cnt = 0 ;
bool dfs( int v, bool shade ){
    color[v] = shade ;
    cnt++ ;
    visited[v] = 1 ;
    for( int u : adj[v] ){
        if( !visited[u] ){
            if( !dfs(u, !shade) )
                return false ;
        }
        else if( color[v] == color[u] )
            return false ;
    }
    return true ;
}
bool dsu[100001] ;
vi v1 , v2 ;
void dfs1( int v , int par ){
    dsu[v] = 1 ;
    if( color[v] )
        v1.push_back(v) ;
    else
        v2.push_back(v) ;
    for( int u : adj[v] ){
        if( !dsu[u] )
            dfs1(u, v) ;
    }
}
int main(){
    FAST_IO ;
    int N , M ; cin >> N >> M ;
    for( int i = 1 ; i <= M ; i++ ){
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y) ;
        adj[y].push_back(x) ;
    }
    
    for( int i = 1 ; i <= N ; i++ ){
        if( !visited[i] ){
           if( adj[i].empty() )
               continue ;
            
            bool flag = dfs( i, 1) ;
            if( !flag ){
                cout << "-1" << endl ;
                return 0 ;
            }
        }
    }
    for( int i = 1 ; i <= N ; i++ ){
        if( !dsu[i] && !adj[i].empty() )
            dfs1(i, -1) ;
    }
    cout << v1.size() << endl ;
    for( int x : v1 )
        cout << x << " " ;
    cout << endl << v2.size() << endl ;
    for( int x : v2 )
        cout << x << " " ;
    cout << endl ;
    return 0 ;
}


