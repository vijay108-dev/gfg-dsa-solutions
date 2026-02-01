/*
    Problem: K Sized Subarray Maximum
    Platform: GFG
    Approach: Sliding Window + Deque

    Time Complexity: O(n)
    Space Complexity: O(k)
*/

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution{
public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k){
        vector<int>ans;
        deque<int>dq; //stores indics

        for (int i=0;i<arr.size();i++){

            // 1 Remove indices out of current window
            if(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
            // 2 Remove smaller elements from back
            while(!dq.empty()&&arr[dq.back()]<=arr[i])
                dq.pop_back();

            // 3 Push current index
            dq.push_back(i);

            // 4 store max for current window
            if(i >=k-1)
                ans.push_back(arr[dq.front()]);
        }

        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> arr={1,2, 3, 1,4, 5, 2,3,6};
    int k=3;
    vector<int>result=sol.maxOfSubarrays(arr, k);
    for(int x:result)
        cout<< x<<" ";

    return 0;
}
