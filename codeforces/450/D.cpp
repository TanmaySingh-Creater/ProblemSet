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

using node = pair<int, bool> ;
vector<pair<bigint,node>> adj[200005] ;
bigint dist2[200005] ;
bool visited[200005] ; int ans ;
void dijisktra( int src , bigint dist[] ){
    priority_queue<pair<bigint , node> , vector<pair<bigint , node> > , greater<pair<bigint , node> > > pq ;
    pq.push({0 , {src,0}}) ;
    dist[src] = 0 ;
    while( !pq.empty() ){
        pair<bigint , node > curr = pq.top() ;
        pq.pop() ;
        bigint D = curr.first , v = curr.second.first ;
        bool flag = curr.second.second ;
        if( visited[v] )
            continue ;
        visited[v] = 1 ;
        if( flag )
            ans++ ;
        for( auto u : adj[v] ){
        
                pq.push({dist[u.first] = D + u.second.first,{u.first ,u.second.second}}) ;
                
        }
    }
}


int train[200005] ;

int main(){
    FAST_IO ;
    int N, M, K; cin >> N >> M >> K ;
    
    for( int i = 1; i <= M; i++ ){
        int x, y, w; cin >> x >> y >> w;
        adj[x].push_back({y, {w,0}});
        adj[y].push_back({x, {w,0}});
    }
    
    for( int i = 1 ; i <= N ; i++ ){
        dist2[i] = 1e15 ;
    }

    for( int i = 1; i <= K; i++ ){
        int x, y; cin >> x >> y;
        adj[1].push_back({x, {y,1}}) ;
    }
    
    dijisktra(1, dist2) ;
    
    cout << K - ans << endl ;
    
    return 0 ;
}


