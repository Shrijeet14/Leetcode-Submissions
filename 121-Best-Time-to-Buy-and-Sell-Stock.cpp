class Solution {
public:
    void maxProfitFinder(vector<int>& prices , int buy , int &minPrice , int &maxProfit){
        if(buy == prices.size()){
            return;
        }

        if(prices[buy] < minPrice){
            minPrice = prices[buy];
        }
        int profit = prices[buy] - minPrice;
        if(profit > maxProfit){
            maxProfit = profit;
        }
        maxProfitFinder(prices , ++buy ,minPrice ,maxProfit);
    }
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices ,0 ,minPrice ,maxProfit);
        return maxProfit;
    }
};