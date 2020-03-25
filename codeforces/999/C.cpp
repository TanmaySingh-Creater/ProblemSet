#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{

    int N , K ;
    cin >> N >> K  ;
    string str ;
    cin >> str ;
    string abc = str ;
    sort( abc.begin() , abc.end() );
    
    map< char , int > m ;
    for( int i = 0 ; i < K ; i++ ){
        m[abc[i]] ++ ;
    }
    for( int i = 0 ; i < str.length() ; i++ ){
        if( m.find(str[i]) != m.end() && m[str[i]] != 0 ){
            m[str[i]] -- ;
        }
        else{
            cout << str[i] ;
        }
    }
    
    
    return 0;
}
// t a n m a y
