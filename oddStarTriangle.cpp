#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}