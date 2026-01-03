class Solution {
    public int maxProfit(int[] prices) {
        int buy = Integer.MAX_VALUE;
        int max_profit = 0;

        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < buy) {
                buy = prices[i];

                for (int j = i + 1; j < prices.length; j++) {
                    int curr_profit = prices[j] - buy;
                    if (curr_profit > max_profit) {
                        max_profit = curr_profit;
                    }
                }
            }
        }
        return max_profit;
    }
}