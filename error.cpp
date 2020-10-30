#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int

int main(){

    ll t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;
        ll count = 0;
        ll n = s.length();
        for (ll i = 0; i < n-2; i++)
        {   
            if(s[i] == '1' and s[i+1] == '0' and s[i+2] == '1'){

                count = 1;
                break;

            }
            
            if(s[i] == '0' and s[i+1] == '1' and s[i+2] == '0'){
                
                count = 1;
                break;
            }
                
        }

        if(count){

            cout<<"Good"<<endl;
        }

        else
        {
           cout<<"Bad"<<endl; 
        }
         
               
        
    }
    
    return 0;
}

