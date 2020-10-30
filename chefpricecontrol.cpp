#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int i = 0, T, N, K, P;
    cin>>T;

    int lossarray[10];
    while(i < T){

        cin>>N>>K;
        int P[N];
        int loss = 0, lossest = 0;
        int j = 1;

        for (int j = 0; i < N; j++)
        {

            cin>>P[j];
            lossest = lossest + P[j];
            if(P[j] > K){

                loss = loss + K;

            }

            else{

                loss = loss + P[j];
            }

        
        }

    int diff = lossest - loss;
    lossarray[i] = diff;
    i++;
        

    }

    for(i = 0; i< T; i++){

        cout<<lossarray[i]<<endl;
    }
	return 0;
}
