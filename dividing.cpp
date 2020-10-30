#include<iostream>
using namespace std;
#define ll long long int 

int main(){

    ll n, sum = 0, sum_of_n;
    cin>>n;
    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        sum = sum+ a[i];
    }

    sum_of_n = (n *(n+1))/2;
    if(sum == sum_of_n){

        cout<<"YES"<<endl;
    }

    else{

        cout<<"NO"<<endl;
    }
    

    return 0;
}