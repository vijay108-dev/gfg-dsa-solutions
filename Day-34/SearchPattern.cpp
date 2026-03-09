class Solution {
  public:
  
    void buildLPS(vector<int> &lps, string &pat){
        int pre =0;
        int suf =1;
        int m=pat.size();
        while(suf<m){
            
            if(pat[pre]==pat[suf]){
                lps[suf]=pre + 1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
    }
    vector<int> search(string &pat, string &txt){
        
        int n =txt.size();
        int m =pat.size();
        
        vector<int>lps(m,0);
        vector<int>ans;
        
        buildLPS(lps,pat);
        
        int first =0;
        int second= 0;
        
        while(first<n){
            
            //Match
            if(txt[first]==pat[second]){
                first++;
                second++;
            }
            // Not match
            else{
                if(second==0)
                    first++;
                else
                    second=lps[second - 1];
            }
            // Pattern found
            if(second==m)
            {
                ans.push_back(first-second);
                second=lps[second-1]; // continue searching
            }
        }
        return ans;
    }
};
//Time Complexity = O(n + m)
//Space Complexity = O(m)
