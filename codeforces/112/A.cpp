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
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
typedef long long  int  bigint ;

using namespace std ;
int main(){
int i,l,j,first=0,second=0;
string a,b;
cin>>a>>b;
l=a.size();
for(i=0; i<l ;i++){
    if(tolower(a[i])==tolower(b[i])){
        first++;
        second++;
    }
    else
    {
        int k,m;
        k=(tolower(a[i]));
        m=(tolower(b[i]));
        if(k>m){
        first++;
            break ;
        }
        else
        second++;
        break ;
    }
}
if(first==second)
cout<<"0"<<endl;
else if(first>second)
cout<<"1"<<endl;
else
cout<<"-1"<<endl;

    return 0 ;
    
}

