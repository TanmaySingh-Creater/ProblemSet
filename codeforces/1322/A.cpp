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
int srcX , srcY , L , R ;
int dist[2005][2005] ;
bool isValid( int x , int y ){
    if( x > N || y > M || x < 1 || y < 1 )
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
                int D = ( ch[X+dx[i]][Y+dy[i]] == '1' ) ;
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
    int N ; cin >> N ;
    string str ; cin >> str ;
    int ans = 0 , bal = 0 ;
    for( int i = 0 ; i < N ; i++ ){
        if( str[i] == '(' )
            bal++ ;
        else{
            bal-- ;
            if( bal < 0 )
                ans++ ;
        }
    }
    if( bal != 0 )
        cout << "-1" << endl ;
    else
        cout << ans * 2 << endl ;
    return 0 ;
}
 