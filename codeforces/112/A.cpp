#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std ;
int main()
{
    string first , second ;
    cin >> first >> second ;
    int first_size = (int)first.size();
  
    for( int i = 0 ; i < first_size ; i++ )
    {
        first[i] = tolower(first[i]);
        second[i] = tolower(second[i]);
        
    }
  
    if( first ==  second )
    {
        cout <<"0"<<endl;
        return 0 ;
    }
    else if ( second > first )
    {
        cout <<"-1"<<endl;
        return 0 ;
    }
    else
        cout << "1"<<endl;
    
    return 0 ;
}

