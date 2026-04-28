class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        vector<int>ans(s.begin(), s.end());
        int cnt = 0;
        int c = 0;
        for(int i = 1; i <= ans.size(); i++) {
            if((ans[i] - ans[i - 1]) == 1) {
                c++;
            }
            else{
                cnt = max(cnt, c + 1);
                c = 0;
            }
        }

        return cnt;
    }
};
