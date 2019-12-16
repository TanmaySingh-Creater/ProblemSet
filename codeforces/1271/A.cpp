#include <bits/stdc++.h>

using namespace std;

int main()

{
    long long int tie , scarf , vest , jacket , maal1 , maal2 ;
    cin >> tie >> scarf >> vest >> jacket >> maal1 >> maal2 ;
    long long price1 , price2 ;
    
    
    if( maal2 > maal1 )
    {
        price2  = min({scarf , vest , jacket})*maal2;
        jacket = jacket -min({scarf , vest , jacket}) ;
        price1 = min(jacket , tie)*maal1;
        cout <<price1 + price2 <<endl;
        return 0 ;
        
    }
    else
    {
        price1 = min(jacket , tie)*maal1;
        jacket = jacket - min(jacket , tie);
        price2 = min({jacket , scarf , vest})*maal2;
        cout << price1 + price2<<endl;
        return 0 ;
        
    }
    
    return 0 ;
}
