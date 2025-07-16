#include<iostream>
using namespace std;
int main(){
    
    // cout<<"Enter size of an array: ";
    // cin>>n;
    int arr[]={1,2,3,4,5};
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    int* ptr = arr; // giving addressr
    for(int i=0; i<=4; i++){
        cout<<i[ptr]<<" ";
        
    }
    ptr = arr; // pointer is pointing to 1st element
    *ptr = 8; // ptr[0] = 8
    ptr++; // ptr is pointing to 2nd element
    *ptr = 9;
    ptr--; // ptr is pointing to 1st element
    cout<<endl;
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;

        
    }
    ptr = arr; // ptr is pointing to 1st element
    

    // for(int i=0; i<=4; i++){
    //     cout<<ptr[i]<<" ";

    // }
    //cout<<&arr[0];
    //cout<<ptr[0];


}