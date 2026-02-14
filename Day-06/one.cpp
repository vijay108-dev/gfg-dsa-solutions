#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int buyPrice=prices[0];//Price at which we buy the stock (minimum so far)
    int profit=0;//Maximum profit so far

    //Start from second day
    for(int i=1;i<prices.size();i++){

        //If current price is lower update buy price
        if(prices[i]<buyPrice){
            buyPrice= prices[i];
        }
        // Otherwise calculate profit and update max profit
        else{
            profit = max(profit, prices[i]-buyPrice);
        }
    }

    return profit;//Return maximum profit
}

int main() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};   
    cout << maxProfit(prices)<<endl; 
}
//Time Complexity = O(n)
//Space Complexity = O(1)
//Stock Buy and Sell – Max one Transaction Allowed
