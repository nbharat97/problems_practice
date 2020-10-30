#include <iostream>
using namespace std;
#define ll long long int

int main() {
	
    ll t;
    cin>>t;
    while (t--)
    {
        ll n, k, sum = 0, sumTot = 0;
        cin>>n>>k;
        ll p[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>p[i];
            sumTot = sumTot + p[i];
            if(p[i] > k){

                sum = sum + k;
            }
            else
            {
                sum = sum + p[i];
            }
            
        }

        cout<<sumTot - sum<<endl;
        
        
    }
        
    return 0;
}
