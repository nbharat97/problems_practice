#include<iostream>
using namespace std;
#include<vector>
#define ll long long int

int main(){

    ll h,m;
    string message_minutes;
    cin>>h>>m;

    vector<string> numbers = {
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };

    if(m %10 == 0 and m < 10){

        cout<<numbers[h]<<" o' clock"<<endl;
    }

    else if(m == 30)
    {
        cout<<"half past "<<numbers[h];
    }
    
    else
    {   
        if(m > 30){

            m = 60 - m;
            if(m == 1){

                cout<<numbers[m]<<" minute to "<<numbers[h+1];
            }

            else if(m == 15){

                cout<<"quarter to "<<numbers[h+1];
            }

            else
            {
                cout<<numbers[m]<<" minutes to "<<numbers[h+1];
            }
            
        }

        else if(m == 1){

            cout<<numbers[m]<<" minute past "<<numbers[h];
        }

         else if(m == 15){

            cout<<"quarter past "<<numbers[h];
        }

        else
        {
            cout<<numbers[m]<<" minutes past "<<numbers[h];
        }
        
    }
    

    return 0;
}