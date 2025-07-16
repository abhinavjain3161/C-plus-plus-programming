#include<iostream>
using namespace std;
int main()
{
    // cout<<"Enter a number: ";
    // int n;
    // cin>>n;
    // if(n%2==0)
    // {
    //     cout<<"even";
    // }
    // else
    // {
    //     cout<<"odd";
    // }

    //to check if num is divisible by 5 or not.

    int n;
    cout<<"Enter positive integer: ";
    cin>>n;
    if(n%5==0)
    {
        cout<<n<<" is divisible by 5.";
    }
    else{
        cout<<n<<" is not divisible by 5.";
    }
}