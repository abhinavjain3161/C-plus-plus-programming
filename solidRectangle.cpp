#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines here: ";
    cin>>n;
    int m;
    cout<<"Enter number of columns here: ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}
