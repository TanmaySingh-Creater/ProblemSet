//
//  CPlibrary
//
//  Created by Tanmay Singh on 21/12/19.
//  Copyright © 2019 Tanmay Singh. All rights reserved.
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
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;
 
int spf[MAX] ;
using namespace std ;
 



    int main()
    {
        FAST();
      
        int T;
        cin >> T;
        while (T--) {
            string s;
            cin >> s;
            
            vector<int> pos;
            pos.push_back(0);
            for (int i = 0 ; i < int(s.size()) ; i++ ) {
                if (s[i] == 'R') pos.push_back(i + 1);
            }
            
            pos.push_back(s.size() + 1);
            int ans = 0;
            
            for (int i = 0; i < int(pos.size()) - 1; ++i) {
                ans = max(ans, pos[i + 1] - pos[i]);
            }
            cout << ans << endl;
        }
        
        return 0 ;
    }
