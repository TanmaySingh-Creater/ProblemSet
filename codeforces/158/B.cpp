#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std ;

int main()
{
    int n ;
    int group[5];
    cin >> n ;
    memset(group , 0 , sizeof(group)) ;
    int x ;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> x ;
        group[x]++ ;
    }
    
    int ans ;
    ans = group[4] + group[3] + group[2] / 2 ;
    
    group[1] -= min( group[1] , group[3]) ;
    ans = ans + group[1] / 4;
    if( group[2] % 2 == 0 )
    {
        group[2] = 0 ;
    }
    else
     group[2] = 1 ;
    
    group[1] = group[1] % 4 ;
    
    if( group[2] == 1 && group[1] == 3)
    {
        cout << ans + 2 <<endl;
        return 0 ;
    }
    if( group[2] == 0 && group[1] == 0 )
    {
        cout << ans <<endl;
        return 0 ;
    }
    cout << ans + 1 <<endl;
    return 0 ;
}
// 2 1 1 1 = 2
// 1 1 1 = 1
// 1 1 = 1
// 2 1 = 1
// 2 1 1 = 1
// 2 = 1
// 1 = 1

