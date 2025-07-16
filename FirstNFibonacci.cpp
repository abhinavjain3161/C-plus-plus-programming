#include<iostream>
using namespace std;
int main(){
    int first=0, second=1 , temp , n, sum = 0;
    cout<<"enter n: ";
    cin>>n;
    int f0 = 1 , f1 = 1;
    cout<<f0<<" "<<f1<<" ";
    for(int i=3; i<=n; i++){
        int next = f0 + f1;
        cout<<next<<" ";
        f0 = f1;
        f1 = next;
    }
    
}