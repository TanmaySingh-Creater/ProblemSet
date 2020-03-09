//
//  CPlibrary
//
//  Created by Tanmay Singh.
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>
#include <string>
#include <stack>
#include <deque>
#include <climits>

#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
typedef long long  int  bigint ;
 
using namespace std ;

int main(){
    string s ;
    cin >> s;
    
    int ans = 0;
    while(s.size()!=1){
        int n = 0 ;
        for(int i=0;i<s.length();++i){
            n+=s[i]-'0';
        }
        s = to_string(n) ;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
