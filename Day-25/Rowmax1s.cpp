class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr){
        int n = arr.size();
        int m = arr[0].size();
        int i =0;
        int j=m - 1;
        int maxRowIndex=-1;
        
        while(i<n &&j>=0){
            if(arr[i][j] ==1) {
                maxRowIndex =i;//update row index
                j--;//move left
            }
            else{
                i++;//move down
            }
        }
        
        return maxRowIndex;
    }
};

// Time c: O(n + m)
// Space c: O(1)