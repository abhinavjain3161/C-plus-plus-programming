#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=n; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}