#include<iostream>
using namespace std;
int main(){

    int n, sum =0, sum1 = 0;
    cin>>n;

    while (n !=1)
    {   
        while(n > 0){

            cout<<sum<<endl;
            sum = n % 10;
            sum = sum * sum;
            sum1 = sum1 + sum;

            n = n /10;


        }
         
        
        n = sum1;
        cout<<n<<endl;
    }

    
    
    return 0;
    
}