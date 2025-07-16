#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Abhinav Jain is a student";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // vector print
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    
}
