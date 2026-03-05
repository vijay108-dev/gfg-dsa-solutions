class Solution {
  public:
    int smallestSubstring(string S) {
        vector<int>count(3,0);
        int first =0;
        int second= 0;
        int distinct =0;
        int minLen =S.size()+1;
        
        while(second<S.size())
        {
            int idx=S[second] - '0';
            count[idx]++;
            
            if(count[idx]==1)
                distinct++;
                
            // if window contains 0,1,2
            while(distinct==3)
            {
                minLen=min(minLen, second-first+1);
                
                count[S[first]-'0']--;
                
                if(count[S[first]-'0']==0)
                    distinct--;
                    
                first++;
            }
            second++;
        }
        
        if(minLen==S.size()+1)
            return -1;
            
        return minLen;
    }
};
//TC = O(N)
//SC = O(1)