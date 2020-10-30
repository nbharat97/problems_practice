#include<iostream>
#define ll long long int
using namespace std;

int main(){

    ll t;
    cin>>t;
    while (t--)
    {   
        ll n, k, count = 0;
        cin>>n>>k;
        ll a[n];

        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] <= 0){

                count++;
            }
        }

        if(k <= count){

            cout<<"NO"<<endl;
        }

        else{

            cout<<"YES"<<endl;
        }


        
    }
    
    return 0;
}