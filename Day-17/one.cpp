class Solution {
  public:
    vector<int> matrixDiagonally(vector<vector<int>>& mat){
        
        int n=mat.size();
        vector<int> ans;
        
        // Total diagonals = 2*n-1
        for(int d = 0;d<2*n-1;d++) {
            
            if(d%2==0){
                // Even diagonal -> bottom to top
                int i= min(d,n-1);
                int j =d -i;
                
                while(i>=0 && j<n){
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                }
            }
            else{
                // Odd diagonal -> top to bottom
                int j=min(d, n-1);
                int i=d - j;
                
                while(j>=0 && i<n){
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
            }
        }
        
        return ans;
    }
};
//TC = O(N^2)
//SC = O(N^2)