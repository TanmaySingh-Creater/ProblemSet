#include <iostream>
#include <set>
#include <map>
using namespace std;
 
int main()
{
 
    int N , steps ;
    cin >> N >> steps ;
    string str ;
    cin >> str ;
    int ch[26] = { 0 } ;
    for( int i = 0 ; i < N ; i++ ){
        ch[str[i] - 'a'] ++ ;
    }
    map<char , int> m ;
    for( int i = 0 ; i < 26 ; i++ ){
        if( ch[i] > 0 && steps > 0 ){
            if( ch[i] >= steps ){
                m[char( i + 'a')] = steps ;
                steps = 0 ;
                break ;
            }
            else{
                 m[char( i + 'a')] = ch[i] ;
                steps -= ch[i] ;
            }
        }
    }
 
    
    for( int i = 0 ; i < str.length() ; i++ ){
        if( m[str[i]] > 0 ){
            -- m[str[i]] ;
        }
        else{
            cout << str[i] ;
        }
    }
    return 0;
}
 