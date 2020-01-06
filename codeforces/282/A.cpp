#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    
    int x = 0 ;
    int T ;
    cin >> T ;
    string str ;
    while( T-- )
    {
        cin >> str ;
        
        if( str == "++X")
        {
            ++x;
        }
        else if(str =="--X")
        {
            --x;
            
        }
        else if( str =="X++")
        {
            x++;
        }
        else
            x--;
    }
    cout << x <<endl;
    return 0 ;
}

