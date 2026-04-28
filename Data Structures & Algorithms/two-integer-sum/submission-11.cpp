class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> last_seen_index;
        for (int i = 0; i < nums.size(); i++) {
            int other = target - nums[i];
            if (last_seen_index.count(other)) {
                return {last_seen_index[other], i};
            }

            last_seen_index[nums[i]] = i;
        }
    }
};
