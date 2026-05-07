class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int max_length = 0;
      sort(nums.begin(), nums.end());
      for(int i = 0; i < nums.size(); i++) {
        int now = nums[i];
        int c = 1;
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[j] == now + 1) {
                c++;
                now = nums[j];
            }
        }
        max_length = max(c, max_length);
      }

      return max_length;  
    }
};
