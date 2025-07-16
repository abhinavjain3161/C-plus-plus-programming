#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
     cin>>n;
    // // 1 2 4 8 16 ... n terms
    // int a = 1;
    // for(int i=1; i<=n; i++){
    //     cout<<a<<endl;
    //     a = a * 2;
    // }

    // 3 12 48 ... nterms
    int a = 3;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a = a*4;
    }
    
}