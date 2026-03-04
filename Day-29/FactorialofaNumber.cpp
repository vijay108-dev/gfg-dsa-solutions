class Solution{
  public:
    vector<int>factorial(int n) {
        
        vector<int>ans(1,1); //initially store 1
        
        while(n>1)
        {
            int carry =0;
            int size =ans.size();
            
            for(int i=0;i<size;i++)
            {
                int res=ans[i] * n+carry;
                carry = res/10;
                ans[i] = res%10;
            }
            
            while (carry)
            {
                ans.push_back(carry%10);
                carry/=10;
            }
            n--;
        }
        reverse(ans.begin(), ans.end());//digits reverse kar diye h
        
        return ans;
    }
};
//Time Complexity = O(N^2)
//Space Complexity = O(D) d means number of digits in n!