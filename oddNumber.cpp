// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         if(i%2==0) continue;
//          cout<<i<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n,digit,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    int i=0;
    while(n!=0){
        if(digit%2==0){
        digit = n%10;
        sum += digit;
        n /= 10;}
    }
}