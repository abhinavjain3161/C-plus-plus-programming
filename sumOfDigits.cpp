#include<iostream>
using namespace std;
int main(){
    int digit,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
    digit = n%10;
    sum = sum+digit;
    n /= 10;}
    cout<<"sum of digits is: "<<sum;

}