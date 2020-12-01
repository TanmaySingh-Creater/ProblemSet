#include<bits/stdc++.h>


using namespace std;


	
void solve()
{
int n;
cin>>n;
int a[n];
string s;
cin>>s;
int c=0;
for(int i=0;i<n; i+=2)
if(s[i]==s[i+1])
{
	c++;
	if(s[i]=='a')
	s[i]='b'; 
	else
	s[i]='a';
}
cout<<c<<endl;
cout<<s;


}

int main()
{
/*int t;
cin>>t;
while(t--)
{
	solve();
	cout<<endl;
}*/
solve();
}