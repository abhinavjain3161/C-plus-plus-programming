#include<iostream>
using namespace std;
void odd_Number(int x, int y){
    if(x > y){
        odd_Number(y,x);
        return;
    }
    for(int i=x; i<=y; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    odd_Number(a,b);
    
}