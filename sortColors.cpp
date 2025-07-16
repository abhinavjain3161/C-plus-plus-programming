#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>&v){
    int n = v.size();
    int noz = 0;// no. of zeroes
    int noo = 0;// no. of ones
    int nots = 0;
    for(int i=0; i<n; i++){
        if(v[i] == 0) noz++;
        else if(v[i] == 1) noo++;
        else (v[i] == 2) nots++;
    }
    // filling elements
    for(int i=0; i<n; i++){
        if(i<noz){
            v[i] = 0;
        }
    
        else if(i<(noz+noo)) 
            v[i] = 1;
        
        else{
            v[i] = 2;
        }
    }
}
    
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);

    display(v);

    sort01(v);

    display(v);
}