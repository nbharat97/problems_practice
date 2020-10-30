using namespace std;
#include<iostream>
#include<string>
#define ll long long int
int main(){

    ll t;
    cin>>t;
    while (t--)
    {
        
        ll n, a = 0,b = 0,count = 1;
        string s;
        cin>>s;

        n = s.size();
        for (ll i = 0; i < n; i++)
        {   

            if (s[i] == s[i+1])
            {
                count = 0;
                break;
            }
            i++;
            
            
            
        }
        if (count)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
        
        
        

    }
    
    return 0;
}