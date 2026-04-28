class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>prefix(n, 1e4);
        vector<int>postfix(n, 0);
        prefix[0] = prices[0];
        for(int i = 1; i < n; i += 1) {
            prefix[i] = min(prefix[i - 1], prices[i]);
        }

        postfix[n - 1] = prices[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            postfix[i] = max(postfix[i + 1], prices[i]);
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            ans = max(ans, postfix[i] - prefix[i]);
        }

        return ans;
    }
};
