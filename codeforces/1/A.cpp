#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    double m , n , a;
    cin >> m >> n >> a;
    
    long long c = ceil(m/a);
    long long d = ceil(n/a);
    
    cout<< c*d;
    return 0 ;
}
