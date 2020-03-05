#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <map>
using namespace std ;


int main(){
  
    int T ;
    cin >> T ;
    
    map < string , int > m ;
    string str ;
    cin >> str ;
    m[str] = 0 ;
    cout << "OK" << endl  ;
    T-- ;
    while( T-- ){
        cin >> str ;
        if(m.find(str) != m.end() ){
            m[str]++ ;
            cout << str << m[str] << endl ;
        }
        else{
            m[str] = 0 ;
            cout << "OK" << endl ;
        }
    }
    return 0 ;
}
