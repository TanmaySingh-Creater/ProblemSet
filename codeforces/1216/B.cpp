#include<bits/stdc++.h>


using namespace std;


	
void solve()
{
int n;
cin>>n;
vector<pair<int,int>>v;

for(int i=0; i<n; i++)
{int a;
	cin>>a;
	v.push_back({a,i+1});
}

sort(v.begin(),v.end());
reverse(v.begin(),v.end());

int c=0;
for(int i=0; i<n; i++)
{
	c+=(v[i].first * i +1);
}
cout<<c<<endl;
for(int i=0; i<n;i++)
cout<<v[i].second<<" ";




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