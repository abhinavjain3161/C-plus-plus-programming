#include<iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if( sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;

}
void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if( sr==er && sc==ec) {// destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D');
    
}
int main(){
    //cout<<maze(0,0,2,2);
    printPath(1,1,3,3,"");
}