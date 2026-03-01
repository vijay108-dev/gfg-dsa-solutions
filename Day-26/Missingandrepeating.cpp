class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr){
        int n=arr.size();
        //1. Decrease all elements by 1 for 0-based indexing
        for(int i=0;i<n;i++)
            arr[i]--;

        //2. Count occurrences by adding n at corresponding indices
        for(int i=0;i<n;i++)
            arr[arr[i] % n]+= n;

        vector<int>ans(2); // ans[0] = repeating, ans[1] = missing

        //3. Identify repeating and missing
        for(int i=0;i<n;i++){
            int count= arr[i] / n;
            if(count== 2)      // repeated element
                ans[0] =i + 1;
            else if(count ==0)// missing element
                ans[1]= i +1;
        }
        return ans;
    }
};
//TC =O(N)
//SC = O(1)
