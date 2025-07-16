#include<iostream>
using namespace std;
int squares(int x){
    return x*x;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Square of "<<a<<"is "<<squares(a)<<endl;
    
}