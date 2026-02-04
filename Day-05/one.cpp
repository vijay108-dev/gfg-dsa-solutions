/*
    Problem: Binary Search – Find First Occurrence of an Element
    Platform: GeeksforGeeks (GFG)
    Approach: Modified Binary Search

    Idea:
    - The given array is sorted
    - Use binary search to efficiently locate the element k
    - If k is found at mid:
        - Store mid as a possible answer
        - Continue searching on the left side to find the smallest index
    - If k is smaller than mid element, move to the left half
    - If k is greater than mid element, move to the right half
    - If k is not present, return -1

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
    int binarysearch(vector<int>&arr,int k){
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==k){
                ans=mid;//answer store
                end=mid-1; //left side search (smallest index)
            }
            else if(arr[mid]<k){
                start= mid + 1;
            }
            else{
                end=mid - 1;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<binarysearch(arr, k)<<endl;

    return 0;
}

//Time complexity = O(logN)
//Space Complexity = O(1)