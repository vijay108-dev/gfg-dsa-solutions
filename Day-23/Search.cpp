//Time complexity: O(n + m)
//Space complexity: O(1)
#include <iostream>
#include <vector>
using namespace std;
    bool searchMatrix(vector<vector<int>> &mat, int x){
        int n = mat.size();
        int m = mat[0].size();
        int i = 0;
        int j = m - 1;
        while(i<n && j>=0){
            if(mat[i][j]==x)
                return true;
            
            else if(mat[i][j]> x)
                j--;//move left
            
            else
                i++;//move down
        }
        
        return false;
    }
int main(){
    
    vector<vector<int>> mat = {
        {4, 8, 15, 25, 60},
        {18, 22, 26, 42, 80},
        {36, 40, 45, 68, 104},
        {48, 50, 72, 83, 130},
        {70, 99, 114, 128, 170}
    };
    
    int x;
    cout<<"Enter element to search: " <<" ";
    cin>>x;
    
    if(searchMatrix(mat, x))
        cout<<"Element Found"<<endl;
    else
        cout<<"Element Not Found"<<endl;
    
    return 0;
}