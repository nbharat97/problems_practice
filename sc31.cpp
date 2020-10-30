#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>

#define ll long long int

string xoring(string s1, string s2){

    string s3 = "";

    for (ll i = 0; i < 10; i++)
    {
        if(s1[i] == s2[i]){

            s3 += "0";
        }

        else
        {
            s3 +="1";
        }
        
        
    }
    return s3;
    

}
int main(){

    ll t;
    cin>>t;
    while (t--)
    {   
        ll n;
        string a, b;
        cin>>n;

        cin>>a;
        cin>>b;
        a = xoring(a,b);
        for (ll i = 2; i < n; i++)
        {
            cin>>b;
            a = xoring(a,b);
        }

        ll count = 0;
        for (ll i = 0; i < 10; i++)
        {
            if (a[i] == '1')
            {
                count++;
            }
            
        }
        
        cout<<count<<endl;
        
        
    }
    
    return 0;
}