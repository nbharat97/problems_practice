#include<iostream>
#include<string>
#include<math.h>
#include <bits/stdc++.h>
#include<stdio.h>
#define ll long long int
using namespace std;
int main(){

    string s;
    getline(cin,s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
    float sq_root = sqrt(s.length());
    ll m = floor(sq_root);
    ll n = ceil(sq_root);
    ll k = 0;
    char encryption[m][n];
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            encryption[i][j] = s[k++];
        }
        
    }

     for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout<<encryption[j][i];
        }
        cout<<" ";
        
    }
    
    

    
    
    return 0;
}