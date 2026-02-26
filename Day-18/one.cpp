class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat){
        int n = mat.size();
        //Reverse each row
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(), mat[i].end());
        }
        //Reverse the rows (top to bottom)
        reverse(mat.begin(), mat.end());
    }
};
//TC = O(N^2)
//SC = O(1)