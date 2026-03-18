class Solution {
public:
    int countWays(int n) {
        if(n==0) return 1;  //1 way no move
        if(n<0) return 0;   //invalid case
        return countWays(n-1)+countWays(n-2)+countWays(n-3);
    }
};
//time complexity too high that is why DP is best