class Solution {
  public:
    int countZeros(vector<vector<int>> A){
        int n = A.size();
        int i = 0;
        int j = n - 1;
        int count = 0;
        
        while(i<n && j>=0){
            if(A[i][j]==0){
                count+=(j+1);//all elements from 0 to j are zero
                i++;//move down
            }
            else{
                j--;//move left
            }
        }
        return count;
    }
};
//Time complexity: O(N)
//Space complexity: O(1)