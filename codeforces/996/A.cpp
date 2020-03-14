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
typedef long long  int  bigint ;
 
using namespace std ;


  int main(){
    FAST() ;
  
      int num ;
      
      cin >> num ;
      
      int count_denomination = 0 ;
      
      int note ;
      while( num > 0 ){
          if( num >= 100 ){
              note = num / 100 ;
              num = num - note* 100 ;
          }
          else if( num >= 20 ){
              
               note = num / 20 ;
               num = num - note * 20 ;
          }
          else if( num >= 10 ){
              
               note = num / 10;
               num = num - note* 10 ;
          }
          else if( num >= 5 ){
              
               note = num / 5 ;
               num = num - note* 5 ;
          }
          else{
               note = num / 1 ;
               num = num - note * 1  ;
          }
           count_denomination += note ;
      }
      
      cout << count_denomination << endl ;
      
      
    return 0;
}
// 4 3
// 1 3 5 1
// 2 4 4
// 1 2 3
// 1 4 1



