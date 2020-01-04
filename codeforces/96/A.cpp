#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    string str ;

    cin >> str ;
    int count = 0 ;
    int m = 0 ;
    int size = (int)str.size();
    for( int i = 1 ; i < size ; i++ )
    {
        if( str[i] == str[i-1])
        {
            count ++;
            if( count+1 == 7)
            {
                cout << "YES"<<endl;
                return 0 ;
            }
            continue ;
        }
        count = 0 ;
    }
    cout << "NO"<<endl;
} // 5 15 30 50 75 105 140 180
