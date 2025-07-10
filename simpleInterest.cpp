#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    // p = 1000;
    // r = 2.2;
    // t = 2;
    // si = (p*r*t)/100;
    // cout<<si;
    cout<<"Enter Principal amount: ";
    cin>>p;
    cout<<"Enter rate in percentage: ";
    cin>>r;
    cout<<"Enter time duration: ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"Simple Interest is: "<<si<<endl;
    return 0;
}