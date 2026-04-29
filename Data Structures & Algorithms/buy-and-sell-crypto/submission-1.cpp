class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int max_prof = 0;
        for (int i = 0; i < prices.size(); i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                max_prof = max(max_prof, prices[j] - prices[i]);
            }
        }

        return max_prof;
    }
};
