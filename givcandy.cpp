#include<iostream>
using namespace std;
#define ll long long int

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        
        cin>>a>>b>>c>>d;
        if((a+c) % 2 == 0 and (b+d) % 2 == 0){

            cout<<"0"<<endl;
        }
        else
        {
            cout<<b-a<<endl;
        }
        
    }
    
    return 0;
}