#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,3,6,7,3,2,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;
}