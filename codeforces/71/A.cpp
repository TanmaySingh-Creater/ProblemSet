#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> str;
    int n ;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    
    for( int i = 0 ; i < n ; i++)
    {
        if(str[i].length() <= 10 )
        {
            cout<<str[i]<<endl;
        }
       else if(str[i].length() > 10)
       {
           
           int l = str[i].length()-2;
           cout<<str[i][0]<<l<<str[i][l+1]<<endl;
       }
    }
    return 0;
}