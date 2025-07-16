#include<iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"Enter the problem: ";
    cin>>a>>op>>b;
    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;

    }
}