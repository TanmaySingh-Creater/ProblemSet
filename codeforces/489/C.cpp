#include <bits/stdc++.h>

using namespace std;

int main(){
	int digits , sum ;
	cin >> digits >> sum ;
	
	if( sum > 9 * digits ){
		cout <<"-1 -1 "<<endl;
		return 0 ;
	}
	if( digits > 1 && sum == 0 ){
		cout << "-1 -1 "<<endl;
		return 0 ;
	}
	vector<int> str ;
	int k = 0 ;
	
	while( digits -- ){
		if( sum >= 9 ){
			sum -= 9 ;
			str.push_back( 9 );
			
		}
		else{
			str.push_back( sum );
			sum = 0 ;
		}
	}
	vector<int> a ( str.begin() , str.end() ) ;
	
	reverse( str.begin() , str.end() );
	
	if( str[0] == 0){
	
		for( int i = 1 ; i < str.size() ; i++ ){
			if( str[i] != 0){
				str[0] = 1 ;
				str[i] = str[i] - 1 ;
				break ;
			 }
		}
	
		for( int i = 0 ; i < str.size() ; i++ ){
			cout <<str[i] ;
		}
		cout <<" ";
		for( auto x : a ){
			cout << x ;
		}
		return 0 ;
	}
	else{
			for( int i = 0 ; i < str.size() ; i++ ){
			cout <<str[i] ;
		}
		cout <<" ";
	for( auto x : a ){
			cout << x ;
		}
	}
	
		
		
	

	return 0;
}