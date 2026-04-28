class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        for(int i = 0; i < heights.size(); i++) {
            for(int j = i + 1; j < heights.size(); j++) {
                int d = min(heights[i], heights[j]);
                int f = j - i;
                ans = max(ans, d * f);
            }
        }

        return ans;
    }
};
