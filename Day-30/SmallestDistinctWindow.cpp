class Solution {
  public:
    int findSubString(string& str) {
        
        vector<int>count(256, 0);
        int first=0;
        int second =0;
        int len =str.size();
        int diff =0;
        //count total unique characters
        while(first<str.size())
        {
            if(count[str[first]]==0)
                diff++;

            count[str[first]]++;
            first++;
        }

        // reset count array
        for(int i=0;i<256;i++)
            count[i]=0;

        first=0;
        while(second<str.size())
        {
            // expand window
            while(diff&&second<str.size())
            {
                if(count[str[second]]==0)
                    diff--;

                count[str[second]]++;
                second++;
            }

            len=min(len, second-first);

            //shrink window
            while(diff!=1)
            {
                len=min(len, second-first);
                count[str[first]]--;
                if(count[str[first]]==0)
                    diff++;

                first++;
            }
        }
        return len;
    }
};
//TC = O(N)
//SC = O(256)