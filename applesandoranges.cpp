#include<iostream>
#define ll long long int
using namespace std;

int main(){

    ll s, t, a, b, m, n, counta = 0, counto = 0;

    cin>>s>>t>>a>>b>>m>>n;
    ll apples[m], oranges[n];

    for (ll i = 0; i < m; i++)
    {
        cin>>apples[i];
        apples[i] = apples[i] + a;
        
        if (apples[i] >=s and apples[i] <=t)
        {   
            //cout<<apples[i]<<endl;
            counta++;
        }
        
    }

    for (ll i = 0; i < n; i++)
    {
        cin>>oranges[i];
        oranges[i] = oranges[i] + b;
        
        if (oranges[i] >=s and oranges[i] <=t)
        {
            //cout<<oranges[i]<<endl;
            counto++;
        }
    }


    cout<<counta<<endl;
    cout<<counto<<endl;   
    

    return 0;
}