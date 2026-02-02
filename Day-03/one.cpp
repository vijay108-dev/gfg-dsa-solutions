/*
    Problem: Second Largest Element in Array
    Platform: GFG
    Approach: One Pass
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;
int secondLargest(vector<int>& arr){
    int largest=-1;
    int second=-1;
    for (int i=0;i<arr.size();i++) 
    {
        if(arr[i]>largest){
            second =largest;
            largest= arr[i];
        }else if(arr[i]<largest && arr[i]>second){
            second =arr[i];
        }
    }

    return second;
}

int main(){
    vector<int>arr;
    arr.push_back(12);
    arr.push_back(35);
    arr.push_back(1);
    arr.push_back(10);
    arr.push_back(34);
    arr.push_back(1);
    int ans = secondLargest(arr);
    cout<<ans<<endl;

    return 0;
}
