#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std ;

int main()
{
    int N ;
    cin >> N ;
    int T ;
    cin >> T ;
    string str ;
    cin >> str ;
    for(int j = 0 ; j < T ; j++ )
    {
    for( int i = 0 ; i < str.size() ; i++ )
    {
        if( str[i] == 'B' && str[i+1] == 'G')
        {
            char ch = 'B';
            str[i] = str[i+1] ;
            str[i+1] = ch ;
            i++ ;
        }
    }
    }
    cout << str ;
    return 0 ;
}
