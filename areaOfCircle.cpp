#include<iostream>
using namespace std;
int area(int radius){
    return 3.14*radius*radius;
}
int main(){
    int r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle is: "<<area(r)<<endl;
     
}