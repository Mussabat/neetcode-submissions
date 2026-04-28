class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int cnt = 0;
        for(auto n : s) {
            if(s.find(n - 1) == s.end()) {
                int c = 0;
                while(s.find(n + c) != s.end()) {
                    c++;
                }
                cnt = max(cnt, c);
            }
        }

        return cnt;
    }
};
