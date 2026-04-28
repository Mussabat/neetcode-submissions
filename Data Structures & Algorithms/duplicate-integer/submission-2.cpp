class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>u;
        for(int i = 0; i < nums.size(); i++) {
            if(u.count(nums[i])) return true;
            else u.insert(nums[i]);
        }

        return false;
    }
};
