#include<bits/stdc++.h>


using namespace std;

long long int gcd(vector<long long int>&v)
{
	long long int gcd =v[0];
	for(long long int i=1; i<v.size();i++)
	gcd = __gcd(gcd,v[i]);
	
	
	return gcd;
	
}
	
void solve()
{
long long int n;
cin>>n;
vector<long long int>v(n);
vector<long long int>v1;

for(long long int i=0; i<n; i++)
cin>>v[i];

long long int x=0;
for(long long int i=0; i<n; i++)
x= max(x,v[i]);
long long int s=0;
for(long long int i=0; i<n; i++)
if(x-v[i]!=0)
{
s+= (x-v[i]);
v1.push_back(x-v[i]);


}

long long int k = gcd(v1);

cout<<s/k<<" "<<k;









}
int main()
{
/*long long int t;
cin>>t;
while(t--)
{
	solve();
	cout<<endl;
}*/
solve();
}