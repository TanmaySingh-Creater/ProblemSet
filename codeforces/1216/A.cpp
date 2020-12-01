#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with(false); cin.tie(0);cout.tie(0);
const int MOD = 1000000007;
#define PI = acos(-1)
using namespace std ;
int main(){
    int n ; 
    cin>> n ; 
    string s ; cin >> s ;
    int cnta =0 , cntb=0;
    for(auto x : s){
    	if(x=='a') cnta++;
    	else if(x=='b')cntb++;
	}
	int ans = 0 ;
	for(int i = 0 ; i < n ; i+=2){
		 if(s[i]!=s[i+1]) continue ;
		 else {
		 	if(s[i]=='a'){
		 		s[i+1] = 'b';
		 		ans++;
			 }
			 else {
			 	s[i+1]='a';
			 	ans++;
			 }
		 }
	}
	cout << ans << endl;
	cout  << s << endl;
}
