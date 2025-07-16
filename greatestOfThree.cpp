#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a number 1: ";
    int n1;
    cin>>n1;
    cout<<"enter a number 2: ";
    int n2;
    cin>>n2;
    cout<<"enter a number 3: ";
    int n3;
    cin>>n3;
    if(n1 > n2 && n1 > n3)
    {
        cout<<"greatest number is: "<<n1;
    }
    if(n2 > n1 && n2 > n3)
    {
        cout<<"greatest number is: "<<n2;
    }
    if(n3 > n1 && n3 > n2)
    {
        cout<<"greatest number is: "<<n3;
    }
}