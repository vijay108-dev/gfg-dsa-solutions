// Medium level Problem : Sort 0s, 1s and 2s
// Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s
// Time Complexity ->O(n)  Space Complexity->O(1)

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void sort012(vector<int>& arr){
        int start=0;
        int mid=0;
        int end = arr.size()-1;
        while (mid<=end){
            if(arr[mid]==0){
                swap(arr[start],arr[mid]);
                start++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{ // arr[mid]==2
                swap(arr[mid],arr[end]);
                end--;
            }
        }
    }
};
int main(){
    vector<int>arr={0, 1, 2, 0, 1, 2};
    Solution s;
    s.sort012(arr);

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

    return 0;
}



