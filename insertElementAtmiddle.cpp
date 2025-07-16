#include<iostream>
using namespace std;
int main()
{
    int N = 5;
    int a[N] = {1,2,3,4,5};
    int I = N;
    int POS = 3;
    while(I>=POS){
        a[I+1] = a[I];
        I--;
    }
    N = N + 1;
    a[POS] = 9;
    for(int i=0; i<N; i++){
        cout<<a[i]<<" ";
    }
}