class Solution {
  public:
    bool isProduct(vector<int> arr, long long x)
    {
        /*
        -------------------- APPROACH --------------------
        1. First sort the array.
        2. Use two pointer technique:
            - left  -> starting index
            - right -> ending index
        3. Calculate product of arr[left] * arr[right]
            - If product == x → pair found → return true
            - If product < x  → increase left (need bigger product)
            - If product > x  → decrease right (need smaller product)
        4. If loop ends → no such pair exists → return false

        NOTE:
        1LL is used to avoid integer overflow.
        It forces multiplication to happen in long long.
        */

        int n = arr.size();

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        int left = 0;
        int right = n - 1;

        // Step 2: Two pointer traversal
        while(left < right) 
        {
            long long prod = 1LL * arr[left] * arr[right];

            if(prod == x)
                return true;
            
            else if(prod < x)
                left++;        // need larger product
            
            else
                right--;       // need smaller product
        }

        return false;
    }
};

/*
-------------------- TIME COMPLEXITY --------------------
Sorting takes: O(n log n)
Two pointer traversal: O(n)

Overall Time Complexity: O(n log n)

-------------------- SPACE COMPLEXITY --------------------
No extra data structure used.
So, Space Complexity: O(1) (ignoring sorting stack space)
*/
