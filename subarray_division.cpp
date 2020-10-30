#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll n, d, m, count_nos = 0;
    cin>>n;
    ll s[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    
    cin>>d>>m;
    for (ll i = 0; i < n; i++)
    {
        ll k = m;
        ll sum = 0;
        while (k)
        {
            sum = sum + s[i + (k -1)];
            k--;
        }

        if (sum == d)
        {
            count_nos++;
        }
        
        
        
    }

    cout<<count_nos<<endl;
    
    return 0;
}