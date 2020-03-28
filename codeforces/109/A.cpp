//
//  CPlibrary
//
//  Created by Tanmay Singh on 21/12/19.
//  Copyright © 2019 Tanmay Singh. All rights reserved.
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
#include <unordered_set>
#include <unordered_map>
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000000
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;
using namespace std ;
void permute( string str , int l ){
    if( l == str.length() - 1 ){
        cout << str << endl ;
    }
    for( int i = l ; i < str.length() ; i++ ){
        swap( str[l] , str[i] ) ;
        permute(str, l + 1 ) ;
        swap( str[i] , str[l] ) ;
    }
}
    void findMin( int sum ){
        int fours = 0, sevens = 0;
        while (sum > 0){
            if (sum % 7 == 0){
                sevens++;
                sum -= 7;
            }
            else if (sum % 4 == 0){
                fours++;
                sum -= 4;
            }
            else{
                fours++ ; sum -= 4;
            }
        }
        if (sum < 0){
            cout << "-1" << endl ;
            return ;
        }
        for (int i = 0 ; i < fours ; i++){
            cout << "4" ;
        }
      
        for (int i=0 ; i < sevens ; i++){
            cout << "7" ;
        }
    }
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int N ; cin >> N ;
    findMin( N ) ;
    cout << endl ;
    return 0 ;
}
