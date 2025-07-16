#include<iostream>
#include<vector>
using namespace std;
// void reverse(vector<int>& nums, int i, int j){
//     while(i<j){
//         int temp = nums[i];
//         nums[i] = nums[j];
//         nums[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
void nextPermutation(vector<int>& nums){
    int n = nums.size();
    // finding pivot index
    int idx = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }

if(idx == -1){ // if array is already greatest
    reverse(nums.begin(),nums.end());
    return;
}
// sorting/ reverse after pivot
reverse(nums.begin()+idx+1, nums.end());
// finding the just greater element than idx
int j=-1;

for(int i = idx+1; i<n; i++){
    if(nums[i]>nums[idx]){
        j = i;
        break;
    }
}
// swapping idx and j
int temp = nums[idx];
nums[idx] = nums[j];
nums[j] = temp;
}