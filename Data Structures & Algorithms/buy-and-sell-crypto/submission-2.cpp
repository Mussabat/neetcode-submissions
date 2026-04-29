class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int max_prof = 0;
        int result = 0;
        for(int i = prices.size() - 1; i >= 0; i--) {
            max_prof = max(max_prof, prices[i]);
            result = max(max_prof - prices[i], result);

        }

        return result;
    }
};
