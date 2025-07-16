#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mul=1;
    for(int i=0; i<n; i++){
        mul *= arr[i];
        
    }
    cout<<mul<<endl;
}