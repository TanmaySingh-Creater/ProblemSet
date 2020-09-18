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


int dx[] = { 1 , -1 , 0 , 0 } ;
int dy[] = { 0 , 0 , 1 , -1 } ;
int N , M ;
char ch[2005][2005] ;
bool visited[2005][2005] ;
bigint srcX , srcY , L , R ;
bigint dist[2005][2005] ;
bool isValid( int x , int y ){
    if( x > N || y > M || x < 1 || y < 1 || ch[x][y] == '*' )
        return false ;
    return true ;
}

void bfs( int x , int y ){
    deque<pair<int, int>> dq ;
    dq.push_back({x , y}) ;
    dist[x][y] = 0 ;
    while( !dq.empty() ){
        pair<int, int> p = dq.front() ;
        dq.pop_front() ;
        int X = p.first , Y = p.second ;
        for( int i = 0 ; i < 4 ; i++ ){
            if( isValid(X + dx[i], Y + dy[i] ) ){
                int D = ( dy[i] == -1 ) ;
                if( dist[X+dx[i]][Y+dy[i]] > dist[X][Y] + D ){
                    dist[X+dx[i]][Y+dy[i]] = dist[X][Y] + D ;
                    if( D == 0 )
                        dq.push_front({X + dx[i] , Y + dy[i] }) ;
                    else
                        dq.push_back({X + dx[i] , Y + dy[i]} ) ;
                }
            }
        }
    }
}
    
int main(){
    FAST_IO ;
    cin >> N >> M >> srcX >> srcY >> L >> R ;
    for( int i = 1 ; i <= N ; i++ ){
        for( int j = 1 ; j <= M ; j++ ){
            cin >> ch[i][j] ;
        }
    }
    for( int i = 1 ; i <= N ; i++ ){
        for( int j = 1 ; j <= M ; j++ ){
            dist[i][j] = INT_MAX ;
        }
    }
    bfs(srcX, srcY) ;
    int ans = 0 ;
    for( int i = 1 ; i <= N ; i++ ){
        for( int j = 1 ; j <= M ; j++ ){
            if( dist[i][j] <= min( L , R - j + srcY) )
                ans++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
 
 
 