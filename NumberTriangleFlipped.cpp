#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int k=1; k<=n-i; k++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // return 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i+j)>=n+1){
                cout<<"*";}
            else cout<<" ";
            
        }
        cout<<endl;
    }
}