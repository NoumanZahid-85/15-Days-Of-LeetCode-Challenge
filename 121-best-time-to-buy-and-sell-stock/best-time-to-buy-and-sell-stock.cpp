class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            // update best buy price so far
            minPrice = min(minPrice, price);
            // update best profit if sold today
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};
