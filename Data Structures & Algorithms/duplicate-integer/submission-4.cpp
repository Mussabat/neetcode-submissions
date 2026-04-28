class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int n = nums.size() + 1;
      unordered_set<int>s(nums.begin(), nums.end());
     
      if(s.size() == nums.size()) return false;
      else return true;
    }
};