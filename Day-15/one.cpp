class Solution {
  public:
    vector<int> downwardDiagonal(int N, vector<vector<int>> A){
        vector<int> ans;
        // First half start from first row
        for(int col=0;col<N;col++){
            
            int i =0;
            int j= col;
            
            while(i<N &&j>=0){
                ans.push_back(A[i][j]);
                i++;
                j--;
            }
        }
        
        // Second half start from last column
        for(int row =1;row<N;row++){
            
            int i =row;
            int j= N- 1;
            
            while(i<N && j>=0){
                ans.push_back(A[i][j]);
                i++;
                j--;
            }
        }
        
        return ans;
    }
};

//TC = O(N^2)
//SC = O(N^2)