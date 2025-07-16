#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row size of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter column size of matrix: ";
    cin>>n;
    int matrix[m][n];
    cout<<"Enter elements of matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        } 
    }
    cout<<endl;
    // wave matrix
    for(int i=0; i<m; i++){
        if(i%2 == 0){
            for(int j=0; j<n; j++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
        
           for(int j=n-1; j>=0; j--){
            cout<<matrix[i][j]<<" ";
        }
        }
        
    }
}
