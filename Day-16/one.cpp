class Solution {
  public:
    vector<int> snakePattern(vector<vector<int>>& matrix){
        
        int n = matrix.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            
            // Even row => left to right
            if(i%2==0){
                for(int j =0;j<n;j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            // Odd row => right to left
            else{
                for(int j = n-1; j>=0;j--){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        
        return ans;
    }
};
//TC = O(N^2)
//SC = O(N^2)