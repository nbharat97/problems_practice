#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
//#define MAX 100000
using namespace std;

int main(){

    ll T, X, Y, K, N, P, C;

    cin>>T;
    while (T--)
    {
        
        cin>>X>>Y>>K>>N;
        ll a[N][2];

        ll count = 0;
        for (ll i = 0; i < N; i++)
        {
            
            //cin>>P>>C;
             for(ll j=0;j<2;j++)
            {
                cin>>a[i][j];
            }

        }
         for(ll i=0;i<N;i++)
        {
            if((Y+a[i][0]) >= X && a[i][1] <= K){

                count = 1;
                break;
            }


            
        }

        if(count){
            
            cout<<"LuckyChef"<<endl;

        }

        else{

            cout<<"UnluckyChef"<<endl;
        }
        
    }
    

    return 0;
}