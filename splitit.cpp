#include<iostream>
#include<string>
using namespace std;
#define ll long long int

int main(){

    ll t;
    cin>>t;

    while (t--){
        
        ll n, count = 0;
        string s;
        cin>>n;
        cin>>s;
        ll size = s.length();
        cout<<size<<endl;
        for (ll i = 0; i < size-1; i++){
            
            if (s[size-1] == s[i]){
                
                count=1;
                break;
            }

            
        }

        if (count){

            cout<<"YES"<<endl;
        }

        else{

            cout<<"NO"<<endl;
        }
        
        

        

    }
    
    return 0;
}