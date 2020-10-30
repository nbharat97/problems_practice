#include <iostream>
using namespace std;

int main() {
	// your code goes here

    int A, B, digit, sumA = 0, sumB = 0;
        
    int T,N;
    int i = 1;
    cin>>T;
    int k;
    while(i <= T){

        int chef = 0, morty = 0;
        cin>>N;
        k = 1;
        while(k <= N){

            cin>>A;
            cin>>B;
        sumA = sumB =0;
        while(A > 0){

            digit = A % 10;
            sumA = sumA + digit;
            A = A /10;

        }

        while(B > 0){

            digit = B % 10;
            sumB = sumB + digit;
            B = B /10;

        }

        if(sumA > sumB){

            chef++;
            
        }

        else{

            morty++;
        }

        k++;
        }

    if(chef > morty){

        cout<<"0"<<" "<<chef;
    }

    else if(morty > chef){

        cout<<"1"<<" "<<morty;
    }

    else
    {
        cout<<"2"<<" "<<chef;
    }
    
    i++;
    }

  
   
  
	return 0;
}