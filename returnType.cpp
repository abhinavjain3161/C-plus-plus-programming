#include<iostream>
using namespace std;
int sum(int x, int y){
     return x + y;
}
int main(){
    int x,y;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    
    cout<<"Sum of "<< x <<" and "<<y<<" is "<<sum(x,y);
}