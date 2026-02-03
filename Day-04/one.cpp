/*
    Problem: Stock Buy and Sell – Max One Transaction Allowed
    Platform: GeeksforGeeks (GFG)
    Approach: Single Pass (One Traversal)

    Idea:
    - Traverse the price array once
    - Keep track of the minimum buying price so far
    - On each day, calculate the profit if the stock is sold
    - Update the maximum profit whenever a better profit is found
    - If no profitable transaction is possible, return 0

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
