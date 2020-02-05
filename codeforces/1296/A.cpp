/*____________________________________________
 TANMAY SINGH
 INDIAN INSTITUTE OF TECHNOLOGY(BHU), VARANASI
 ______________________________________________*/
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <cstring>
#include <unordered_map>
#include <string>
#define  mod 1000000007
typedef long long int bigint ;
using namespace std;
int main()
{
    int T ;
    cin >> T ;
    int N ;
    while( T--){
        cin >> N ;
        int arr[N] ;
        for( int i = 0 ; i < N ; i++ ){
            cin >> arr[i] ;
        }
        int even_count = 0 ;
        int odd_count = 0 ;
        int sum = 0 ;
        for( int i = 0 ; i < N ; i++ )
        {
            sum += arr[i] ;
            if( arr[i] % 2 == 0 ){
                even_count ++ ;
            }
            else
                odd_count ++ ;
        }
        if( sum % 2 != 0 ){
            cout << "YES" <<endl;
            continue ;
        }
       
            if( even_count >= 1 && odd_count >= 1 ){
                cout << "YES" << endl;
            }
        else
            cout << "NO"<< endl;
        
    }
 
    return 0 ;
}
