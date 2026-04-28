class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        int z = 1;
        int c = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                z = 0;
                c++;
                continue;
            }
            mul *= nums[i];
        }
        if(c > 1) mul = 0;
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                ans.push_back(mul);
                continue;
            }

            if(z == 1) {
                ans.push_back(mul / nums[i]);
            }
            else {
                ans.push_back(0);
            }

        }

        return ans;
    }
};
