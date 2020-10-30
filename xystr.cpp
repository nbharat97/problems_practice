#include<iostream>
#include<string>
using namespace std;
#define ll long long int


int main(){

    ll t;
    string s;
    cin>>t;

    while (t--)
    {
        ll n, count = 0;
        cin>>s;
        n = s.length();
        
        for (ll i = 0; i < n-1; i++)
        {
            if((s[i] == 'x' and s[i+1] == 'y') or (s[i] == 'y' and s[i+1] == 'x')){
                
                count++;
                i++;
            }
            

            
        }
        

    cout<<count<<endl;      
    }
    
    return 0;
}