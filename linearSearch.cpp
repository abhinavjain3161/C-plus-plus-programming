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
    int x;
    cin>>x;
    // check mark
    bool flag = false; // false -> not present
    for(int i=0; i<n; i++){
         if(arr[i]==x) flag = true;
         


    }
    if(flag == true) cout<<"element found";
    else cout<<"404 element not found";
    
   
}