#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int N, input;
    int sum = 0;
    int count = -1;

    cin >> N;
    for (int i = 0; i < N; i++)
    {   
        cin>>input;
         v.push_back(input);
    }
    
    sort(v.begin(), v.end()); 

    
    for (auto i = v.begin(); i != v.end(); ++i) {


        sum = sum + (*i);
        count = count + 1;
        //cout<<count<<endl;
        if(sum > 500){

            sum = sum - (*i);
            break;
        }



       

    }

    

   
    cout<<count<<endl; 
    
   
   return 0;


}