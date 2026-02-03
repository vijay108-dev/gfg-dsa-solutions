/*
    Problem: Second Largest Element in an Array
    Platform: GeeksforGeeks (GFG)
    Approach: Single Pass (One Traversal)

    Idea:
    - Traverse the array once
    - Keep track of the largest and second largest elements
    - Update values as larger elements are found
    - Return the second largest element
    - If no valid second largest element exists, return -1

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;
    int maxProfit(vector<int>& prices)
    {
        int buyPrice=prices[0];//price to buy the stock
        int profit=0;//maximum profit
        for(int i=1;i<prices.size();i++){
            //Update buying price if current price is lower
            if(prices[i]<buyPrice){
                buyPrice =prices[i];
            }
            //Try selling and update profit
            else{
                profit= max(profit,prices[i] -buyPrice);
            }
        }

        return profit;
    }
int main() 
{
    vector<int> prices= {7,10,1,3,6,9,2};
    cout<<maxProfit(prices)<<endl;

    return 0;
}
