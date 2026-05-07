class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int max_length = 0;
        set<int>s(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            int c = nums[i];
            int count = 1;
            if(!s.count(c - 1)) {
                while(s.count(c + 1)) {
                    count++;
                    c = c + 1;
                }
            }
           
            max_length = max(max_length, count);
        }
        return max_length;
    }
};
