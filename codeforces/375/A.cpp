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

using namespace std;
 
string number;
int freq[10];
 
int N[] = {9681, 8961, 9816, 6891, 8691, 9861, 8196};
 
int main() {
    cin >> number;
    freq[9]--;
    freq[8]--;
    freq[6]--;
    freq[1]--;
    for (int i=0 ; i<number.size() ; i++) {
        freq[number[i] - '0']++;
    }
    int r = 0;
    for (int d=1 ; d<=9 ; d++) {
        for (int f=0 ; f<freq[d] ; f++) {
            r *= 10;
            r += d;
            r %= 7;
            printf("%d", d);
        }
    }
 
    r *= 10000;
 
    for (int i=0 ; i<7 ; i++) {
        if ((r + N[i]) % 7 == 0) {
            cout << N[i] ;
            break;
        }
    }
 
    for (int i=0 ; i<freq[0] ; i++)
        cout << 0 ;
 
    cout << endl ;
}
