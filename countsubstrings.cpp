#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
//#define MAX 100000
using namespace std;
#include<string>
int main(){

    ll T, ss;

    cin>>T;
    while (T--)
    {

        ll n, c = 0;
        string s;
        cin>>n>>s;

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1'){

                c++;
            }
        }

        ss = (c*(c+1))/2;
        cout<<ss<<endl;
        
    }
    

    return 0;
}