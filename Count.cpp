#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    int count = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i]>x)  count++;
    }
    cout<<count;
}