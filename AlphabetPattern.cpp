#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int n;
    cout<<"enter row: ";
    cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(char ch=65; ch<=68; ch++){
    //         cout<<ch<<" ";
            
    //     }
    //     cout<<endl;
    // }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
            }
}