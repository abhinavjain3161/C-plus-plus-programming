#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a number: ";
    int n;
    cin>>n;
    if(n%3==0 || n%5==0)
    {
        cout<<"The number is divisible by 5 or 3";
    }
    else{
        cout<<"The number is not divisible by 5 and not divisible by 3";
    }