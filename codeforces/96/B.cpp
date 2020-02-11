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
#include <string>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>


#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 100001
typedef long long  int  bigint ;
using namespace std;



vector<bigint> lucky;

void lucky_number_generator(long long number, int fours, int sevens) {
  if(number > 1e10) return;
  
  if(fours == sevens)
    lucky.push_back(number);
  
  lucky_number_generator(number * 10 + 7, fours, sevens + 1);
  lucky_number_generator(number * 10 + 4, fours + 1, sevens);
}

int main(){
    
    bigint N ;
    cin >> N ;
    
    
    lucky_number_generator(4, 1, 0);
    lucky_number_generator(7, 0, 1);
    
    
    sort(lucky.begin() , lucky.end() ) ;
    
    cout <<lucky[lower_bound(lucky.begin(), lucky.end(), N)- lucky.begin()]<<endl;
    
    return 0 ;
}
// 4 7 44 47 74 77 444 447 477 744
