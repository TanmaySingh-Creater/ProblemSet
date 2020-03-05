#include <iostream>
#include <vector>
#include <array>
#include <cmath>
using namespace std ;


int main(){
    long long int N , M ;
    cin >> N >> M ;
    long long int *arr = new long long  int[N] ;
    for( int i = 0 ; i < N ; i++ ){
        cin >> arr[i] ;
    }
    
    if( M < N ){
        cout <<"0"<< endl ;
        delete []arr;
        return 0 ;
    }
    long long int pro = 1 ;
    for( int i = 0 ; i < N ; i++ ){
        for( int j = i + 1  ; j < N ; j++ ){
            pro = (pro % M * abs( arr[i] - arr[j] )%M) % M ;
        }
    }
    cout << pro << endl ;
    delete []arr;
    return 0 ;
}
