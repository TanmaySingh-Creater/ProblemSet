#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    long long int num , k , o;
    cin >> num >> k ;
    if(num % 2 != 0)
    {
        o = (num + 1)/2;
    }
    else{
        o = num/2;
    }
    if( k < o+1)
    {
        cout << 2*k - 1<<endl;
    }
    else
        cout<<2*(k-o);
   
    return 0;
    
    
    
}

