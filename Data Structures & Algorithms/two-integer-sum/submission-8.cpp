class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;  
        int a;
        int b;  
        for(int i = 0; i < nums.size(); i++) {
            if(count(nums.begin(), nums.end(), target - nums[i])) {
                if(nums[i] == target - nums[i] && count(nums.begin(), nums.end(), nums[i]) > 1) {
                a = i;
                b = target - nums[i];
                break;
                }
                else if(nums[i] != target - nums[i] && count(nums.begin(), nums.end(), nums[i]) > 0) {
                a = i;
                b = target - nums[i];
                break; 
                }
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            if(a != i && b == nums[i]) {
                b = i;
                break;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
