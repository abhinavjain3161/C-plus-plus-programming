#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // for(int i=1; i<=2*n-1; i+=2){
    //     cout<<i<<endl;
    // }
    // separate variable
    // 1 3 5 7 9 ...
    // int a = 1;
    // for(int i=1; i<=n; i++){
    //     cout<<a<<endl;
    //     a = a + 2;
    // }
    int a = 100;
    for(int i=100; i>=n; i--){
        cout<<a<<endl;
        if(a != 0)
        a = a - 3;
        else{
            cout<<" ";
        }
    }
}