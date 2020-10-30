#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll n, k, j =0;
    cin>>n>>k;
    ll a[n];
    for (ll i = 1; i <= n; i = i+2)
    {
        a[j] = i;
        j++;
    }

    for (ll i = 2; i <= n; i = i+2)
    {
        a[j] = i;
        j++;
    }
    


    cout<<a[k -1]<<endl;
    


    
    
    
    return 0;
}