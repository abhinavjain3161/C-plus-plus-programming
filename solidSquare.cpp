#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows(side of square): ";
    cin>>n;
    int m;
    cout<<"Enter number of columns(side of square): ";
    cin>>m;
    if(n==m){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"square should have same side!";
}
}