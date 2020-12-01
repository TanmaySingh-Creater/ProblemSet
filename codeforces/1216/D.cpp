#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with(false); cin.tie(0);cout.tie(0);
const int MOD = 1000000007;
#define PI = acos(-1)
using namespace std ;
int main(){
   int n ;cin >> n ; 
   vector<int> v(n);
   int ans = 0 ; 
   for(int i =0 ; i < n ; i++){
   	    cin >> v[i];
   	    ans = max(v[i] ,ans);
   }
   int val = 0 ; 
   for(int i = 0 ; i < n ; i++){
   	   val = __gcd(val , (ans-v[i]));
   }
   int z = val ;
   ll sum = 0 ; 
   for(int i = 0 ; i < n ; i++){
   	   sum += (ans-v[i])/val;
   }
   cout << sum << " " << val << endl;
}