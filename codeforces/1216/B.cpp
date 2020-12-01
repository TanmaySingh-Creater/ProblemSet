#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with(false); cin.tie(0);cout.tie(0);
const int MOD = 1000000007;
#define PI = acos(-1)
using namespace std ;
int main(){
    int n ; cin >> n ; 
    vector<pair<int,int>> v;
    for(int i =0 ; i < n ; i++){
    	int x; cin >> x ;
    	 v.push_back({x , i+1});
	}
	sort(v.begin() , v.end());
	reverse(v.begin() , v.end());
	int x = 0 ; 
	vector<int> ans1 ; 
	ll ans = 0 ; 
	for(int i = 0 ; i < n ; i++){
		 ans += v[i].first*x+1;
		 ans1.push_back(v[i].second);
		 x++;
	}
	cout << ans << endl;
	for(auto x : ans1){
		cout <<  x << " ";
	}
}
