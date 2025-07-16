#include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int arr[n];
//     // input
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     // int max = arr[0];
//     int max = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(max<arr[i])  max = arr[i];
//     }

//     int smax = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i] != max && smax < arr[i])  smax = arr[i];

//     }
//     cout<<max<<endl;
//     cout<<smax;

// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of an array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int max1,max2;
//     max1 = max2 = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(max1<arr[i]){
//             max2 = max1;
//             max1 = arr[i];
//             }
//         else if(max2<arr[i] &&  arr[i]!=max1){
//             max2 = arr[i];
//         }
//     }
//     if(max2==INT_MIN){
//         cout<<"NO second element exists"<<endl;
//     }
//     else cout<<max2<<endl;
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int max1,max2;
    max1 = max2 = INT_MIN;
    for(int i=0; i<n; i++){
        if(max1<arr[i]){
            max2 = max1;
            max1 = arr[i];

        }
        else if(max2<arr[i] && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    if(max2==INT_MIN) cout<<"NO element found"<<endl;
    else cout<<max2<<endl;
    return 0;
}
    