#include<iostream>
using namespace std;
void printMax(int arr[], int n, int idx, int max){
    if(idx == n){
        cout<<max;
        return;
    }
    if(max < arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int main(){
    int arr[] = {2,1,6,31,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr, n, 0,INT16_MIN);
}