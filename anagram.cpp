#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Physicsh0allah";
    string t = "wallahPhysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else false;
}