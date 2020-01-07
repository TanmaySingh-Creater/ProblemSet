#include<bits/stdc++.h>
using namespace std;
int main()
{
int size ;
string str ;
cin >> size >> str ;
int one = 0 , zero= 0 ; 
for(int i = 0 ; i < size ; i++)
{
if(str[i] == 48)
{
zero++;
}
else
one++;
}
cout << size -2*min(zero , one)<<endl;
}
