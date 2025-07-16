#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4};
    int N = 3; // upperbound
    N = N + 1;
    a[N] = 5;
    for(int i=0; i<N; i++){
        cout<<a[i]<<" ";
    }
}