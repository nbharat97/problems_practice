#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll n, k;
    cin>>n>>k;
    ll a[n];
    for (ll i = 1; i <= n; i++)
    {
        cin>>a[i];
    }

    if (a[0] == 0)
    {
        cout<<"0"<<endl;
    }
    
    else
    {
        ll count = k;

        for (ll i = k; i <= n -1; i++)
        {
            if (a[i +1] >= a[i])
            {   
                count++;
                //cout<<a[i]<<endl;
            }
        
        }

        cout<<count<<endl;
    }
    
    
   
    

    return 0;
}