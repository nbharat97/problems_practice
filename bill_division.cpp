#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll n,k,bill_charged,bill_actual = 0;
    cin>>n>>k;
    ll bill[n];

    for (ll i = 0; i < n; i++)
    {
        cin>>bill[i];
        if (k != i)
        {
            bill_actual = bill_actual + bill[i];
            //cout<<bill_actual<<endl;
        }

        
    }

    bill_actual = bill_actual/ 2;

    cin>>bill_charged;
    ll diff = bill_charged - bill_actual;

    if (diff)
    {
        cout<<diff<<endl;
    }

    else
    {
        cout<<"Bon Appetit"<<endl;
    }
    
    
    

    return 0;
}