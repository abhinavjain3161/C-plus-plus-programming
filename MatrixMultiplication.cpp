#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix 1: ";
    cin>>m;
    int n;
    cout<<"Enter columns of matrix 1: ";
    cin>> n;
    int p;
    cout<<"Enter rows of matrix 2: ";
    cin>>p;
    int q;
    cout<<"Enter columns of matrix 2: ";
    cin>>q;
    int matrix1[m][n];
    cout<<"Enter elements of matrix 1: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin>>matrix1[i][j];

    }
    cout<<endl;
    int matrix2[p][q];
    cout<<"Enter elements of matrix 2: ";
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++)
            cin>>matrix2[i][j];

    }
    if (n==p){
        int result[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                result[i][j] = 0;
                for(int k=0; k<p; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j] ;
            }
            
        }
        }
        cout<<endl;
        cout<<"matrix multiplication is: ";
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"Matrix multiplication is not possible!";
    }

}