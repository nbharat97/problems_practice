#include <iostream>
#define ll long long int
#include<string>
using namespace std;

int main() {
	// your code goes here
	
	ll n, flag0 = 0, flag1 = 0;
	string s;
	
	cin>>n;
	cin>>s;
	
	for(ll i=0; i<n; i++){
	    
	    if(s[i] == 'V'){
	        
	        flag0++;
	    }
	    
	    else{
	        
	        flag1++;
	    }
	    
	}
	    
	    if(flag0 > flag1){
	        
	        cout<<"Virat"<<endl;
	    }
	    
	    else{
	        
	        cout<<"Harshit"<<endl;
	    }
	
	return 0;
}
