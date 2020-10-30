#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll t;
    cin>>t;
    while(t--){

        ll n, k, x, y, flag = 0;
        cin>>n>>k>>x>>y;

        for (int i = 0; i < n; i++)
        {
            ll modval;
            modval = (x+k) % n;

            if(modval == y){

                flag = 1;
                break;
            }

            else{

                x = modval;

            }
        }

        if(flag){

            cout<<"YES"<<endl;
        }

        else{

            cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}