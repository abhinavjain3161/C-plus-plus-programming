#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>v){
    int n = v.size();
    int i = 1;
    int j = 0;
    while(i<j){
        if(j>=1) j--;
        else if(i<0) i++;
        else if(i>=0 && j<=0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
        
    }
    return;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    display(v);

    sort01(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    //display(v);

}