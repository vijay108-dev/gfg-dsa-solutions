class Solution {
public:
    int gcd(int a, int b){
        if(b==0)
        return a;
        return gcd(b,a%b);
    }
};

// TC: O(log n)
// SC: O(log n) recursion ki wajah se