class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat){
        
        int n = mat.size();
        int m = mat[0].size();
        
        k=k%m;   //important
        for(int i=0;i<n;i++){
            
            // reverse first k elements
            reverse(mat[i].begin(), mat[i].begin() + k);
            
            //reverse remaining elements
            reverse(mat[i].begin() + k, mat[i].end());
            
            //reverse whole row
            reverse(mat[i].begin(), mat[i].end());
        }
        
        return mat;
    }
};

//TC = O(n × m)
//SC = O(1)
