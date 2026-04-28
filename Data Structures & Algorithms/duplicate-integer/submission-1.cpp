class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>v(nums.begin(), nums.end());
        if(v.size() == nums.size()) return false;
        else return true;
    }
};
