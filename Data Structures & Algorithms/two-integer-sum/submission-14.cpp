class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
         unordered_map<int, int>second_index;
         for(int i = 0; i < nums.size(); i++) {
            if(second_index.count(target - nums[i])) {
                return {second_index[target - nums[i]], i};
            }
            second_index[nums[i]] = i;
         }     
         
              
            
    }
        
    
};
