#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number: ";
    int n;
    cin>>n;
    // if((n%3==0 || n%5==0) && (n%15!=0))
    // {
    //    cout<<"The number is divisible by 5 or 3 but not 15";
    // }
    // else{
    //     cout<<"Not matching condition";
    // }

    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            cout<<"The number is divisible by 5 or 3 but not 15. ";
        }
        else{
            cout<<"Not matching condition";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}