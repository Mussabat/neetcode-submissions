class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int>m;
        int a, b;
        for(int i = 0; i < numbers.size(); i++) {
            if(m.find(target - numbers[i]) != m.end()) {
                a = i + 1;
                b = m[target - numbers[i]] + 1;
                return {b, a};
            }

            m[numbers[i]] = i;
        }        
    }
};
