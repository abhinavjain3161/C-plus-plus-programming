#include<iostream>
using namespace std;
int main()
{
    int N = 5;
    int a[N] = {1,2,3,4,5};
    int POS = 2;
    int I = POS;
    while(I<=N-1){
        a[I] = a[I+1];
        I = I + 1;
    }
    N = N - 1;
    for(int i=0; i<N; i++){
        cout<<a[i]<<" ";
    }
}