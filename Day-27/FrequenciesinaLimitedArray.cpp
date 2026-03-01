class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr)
    {
        int n = arr.size();
        
        //1. Decrease elements by 1 for 0-based indexing
        for(int i=0;i<n;i++)
            arr[i]--;//now elements are in range 0 to n-1

        //2. Use elements as index and increment by n to count frequency
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0){ // only process original values
            
            
                int index=arr[i]%n;
                arr[index]+= n;
            }
        }
        
        //3.Prepare frequency array
        vector<int>freq(n);
        for(int i=0; i<n;i++)
            freq[i]= arr[i]/n;

        return freq;
    }


};

//TC = O(N)
//SC = O(1)