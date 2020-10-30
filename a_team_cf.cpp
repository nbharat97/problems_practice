#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll n, count = 0;
    cin>>n;
    while (n--){

        ll sum = 0;
        for (ll i = 0; i < 3; i++) {   
            ll frnds;
            cin>>frnds;
            sum = sum + frnds;

        }

        if(sum > 1){

            count++;
            //cout<<count<<endl;
        }

    }

    cout<<count<<endl;

    return 0;
    
    
}