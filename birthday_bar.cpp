#include<iostream>
#define ll long long int
using namespace std;


int main(){

    ll n, b_count = 0;
    cin>>n;
    ll s[n];

    for (ll i = 1; i <= n; i++)
    {
        cin>>s[i];
    }

    ll d,m;
    cin>>d>>m;

    for (ll i = 1; i <= n; i++)
    {
        ll m_count = m, b_sum = 0;
        ll j = i;

        while (m_count--)
            {
                if (n == 1)
                {
                    b_sum = b_sum + s[j];
                }

                else
                {
                    b_sum = b_sum + s[j+1];
                    j--;
                }
                
            

            }
        
        
    
        if(b_sum == d){

            b_count = b_count + 1;
            
        }
        
    }
    
    cout<<b_count<<endl;

    return 0;
}