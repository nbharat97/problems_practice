#include<iostream>
#include<math.h>
using namespace std;
#define ll long long int

int main(){


    ll n, recipients = 5;
    ll liked, cumulative = 0;
    cin>>n;

    while (n--)
    {
        liked = floor(recipients /2);
        cumulative = cumulative + liked;
        recipients = liked * 3;
    }


    cout<<cumulative<<endl;
    

    return 0;
}