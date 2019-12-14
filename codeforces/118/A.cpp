#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str , str1;
    cin >> str;
    vector<char> v;
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(str[i] =='a' || str[i] =='A' || str[i] =='e' || str[i] =='E' ||str[i] =='i' || str[i] =='I' ||str[i] =='o' || str[i] =='O' ||str[i] =='u' || str[i] =='U' ||str[i] =='y' || str[i] =='Y')
        {
            continue;
        }
        else
        {
            str1 += '.';
            str1 += tolower(str[i]);
        
        }
     
}
    cout << str1<<endl;
     return 0;
}

