#include <bits/stdc++.h> 
using namespace std; 
#include<vector>

/*
class Geeks 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string geekname; 
  
    // Member Functions() 
    void printname() 
    { 
       cout << "Geekname is: " << geekname; 
    } 
}; 
  
int main() { 
  
    // Declare an object of class geeks 
    Geeks obj1; 
  
    // accessing data member 
    obj1.geekname = "Abhi"; 
  
    // accessing member function 
    obj1.printname(); 
    return 0; 
} 


optimized soln for finding the max difference in an array

int profit = 0, minPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            profit = max(profit, prices[i]-minPrice);
        }
        
        return profit;
*/



class Solution {

public:
    int maxProfit(vector<int>& prices) {

         if(prices.size() == 0 || prices[0] == 0)
            return 0;
        int min = prices[0], max, min_index;
        int n = prices.size();
    
        if(n < 2)
            return 0;
        
        for (int i = 1; i < n; i++)
        {
            if(min > prices[i]){

                min = prices[i];
                min_index = i;

            }
        }

        cout<<min<<endl;

        max = min;

        for (int i = min_index +1; i < n; i++)
        {
            if(max < prices[i]){

                max = prices[i];
            }
        }
        
        cout<<max<<endl;
        int profit = max - min;
        cout<<profit<<endl;

        
              
    }
};


int main(){


    Solution sol;

    vector<int> prices;
    int n, input;
    cin>>n;

    for (int i = 0; i < n; i++)
    {   
        cin>>input;
        prices.push_back(input);
    }
    
    sol.maxProfit(prices);

    return 0;
}