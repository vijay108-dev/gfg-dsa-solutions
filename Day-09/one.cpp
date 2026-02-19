#include <iostream>
#include <vector>
using namespace std;
int maxSubarraySum(vector<int> &arr) {
    int prefix = 0;  //sum till current index
    int minPrefix = 0; //smallest prefix till now
    int maxi = INT_MIN;//answer
    for(int i=0;i<arr.size();i++) 
    {
        prefix += arr[i];   //build prefix sum
        maxi= max(maxi, prefix - minPrefix); //best subarray sum
        minPrefix = min(minPrefix,prefix);   //update min prefix
    }
    return maxi;
}
int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr)<<endl; 
    return 0;
}

//TC= O(n)
//SC= O(1)