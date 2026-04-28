class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>ans;  
        vector<int>p;
        int a;
        int b;  
        for(int i = 0; i < nums.size(); i++) {
            ans[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(ans[target - nums[i]] > 0) {
                if(nums[i] == target - nums[i] && ans[target - nums[i]] > 1) {
                    a = i;
                    b = nums[i];
                    break;
                }

                else if(nums[i] != target - nums[i] && ans[target - nums[i]] > 0) {
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

        p.push_back(a);
        p.push_back(b);
        return p;
    }
};
