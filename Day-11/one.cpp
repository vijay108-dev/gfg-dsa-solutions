#include<iostream>
#include<vector>
using namespace std;
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) 
                            {
        
        int q =leftIndex.size();
        vector<int> ans;

        for(int i = 0; i < q; i++){
            int L = leftIndex[i];
            int R = rightIndex[i];

            int sum =0;
            int maxi= INT_MIN;

            for(int j = L; j <= R; j++) {
                sum+= arr[j];// prefix sum
                maxi= max(maxi, sum); //track maximum prefix
            }

            ans.push_back(maxi);
        }

        return ans;
    }
int main(){
    vector<int> arr = {-1, 2, 3, -5};
    vector<int> leftIndex = {0, 1};
    vector<int> rightIndex = {3, 3};

    vector<int>res=maxPrefixes(arr, leftIndex, rightIndex);

    for(int x : res)
     cout<<x<<" ";
}

//Time complexity: O(N·Q)
//Space complexity: O(1) auxiliary