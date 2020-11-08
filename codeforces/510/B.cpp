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

int N , M ;
char matrix[101][101] ;
bool visited[101][101] ;
int dx[] = { 1 , -1 , 0 , 0 , 1 , 1 , -1 , -1 } ;
int dy[] = { 0 , 0 , 1 , -1 , 1 , -1 , 1 , -1 } ;

bool isValid( int X , int Y , char ch ){
    if( X < 1 || X > N || Y < 1 || Y > M || matrix[X][Y] != ch  )
        return false ;
    return true ;
}


bool dfs( int X , int Y , char ch , int parX , int parY ){
    visited[X][Y] = 1 ;
    for( int i = 0 ; i < 4 ; i++ ){
        int x = X + dx[i] , y = Y + dy[i] ;
        if( isValid(x, y, ch) && !visited[x][y] ){
            if( dfs(x, y, ch, X, Y) )
                return true ;
        }
        else if( isValid(x, y, ch) && visited[x][y] ){
            if( x != parX && y != parY )
                return true ;
        }
    }
    return false ;
}



int main(){
    FAST_IO ;
    cin >> N >> M ;
    for( int i = 1 ; i <= N ; i++ ){
        for( int j = 1 ; j <= M ; j++ ){
            cin >> matrix[i][j] ;
        }
    }

    bool flag = false ;
    for( int i = 1 ; i <= N ; i++ ){
        for( int j = 1 ; j <= M ; j++ ){
            if( !visited[i][j] ){
                if( dfs(i, j, matrix[i][j], -1, -1) ){
                    flag = true ;
                    break ;
                }
            }
        }
    }

    if( flag )
        cout << "Yes" << endl ;
    else
        cout << "No" << endl ;

    
    return 0 ;
}
