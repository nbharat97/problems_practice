#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll n, min, max, count_min = 0, count_max = 0;
    cin>>n;
    ll a[n];

    cin>>a[0];
    min = max = a[0];
    for (ll i = 1; i < n; i++)
    {   
        cin>>a[i];
        if(a[i] < min){

            count_min++;
            min = a[i];
        }

        if (a[i] > max){
            
            count_max++;
            max = a[i];
        }
        
    }

    cout<<count_max<<" "<<count_min<<endl;
    
    return 0;
}