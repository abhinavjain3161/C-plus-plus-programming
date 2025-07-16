#include<iostream>
using namespace std;
int main(){
    // 4,7,10,13,...n terms.
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=4; i<=3*n + 1; i += 3){
        cout<<i<<" ";
    }
}