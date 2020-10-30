#include<iostream>
using namespace std;
#define ll long long int

int main(){

    ll t;
    cin>>t;

    while (t--)
    {
        ll n, m, s;

        cin>>n>>m>>s;
        
        /*
        ll j = s;
        for (ll i = 1; i <= m; i++)
        {   
            if (j > n)
            {
                j = 1;
            }
            
            //cout<<j;
            j++;
        }
        
        cout<<j -1<<endl;
    }

    */
    //optimized

    cout<<(m+(s-1)) % n<<endl;

    }
    
    return 0;
}