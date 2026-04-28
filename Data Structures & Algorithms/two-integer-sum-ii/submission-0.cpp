class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int>m;
        for(int i = 0; i < numbers.size(); i++) {
            m[numbers[i]] = i + 1;
        }
        int a; 
        int b;

        for(int i = 0; i < numbers.size(); i++) {
            if(numbers[i] == target - numbers[i] && m.count(numbers[i]) > 1) {
                a = i + 1;
                b = target - numbers[i];
                break;
            }

            if(numbers[i] != target - numbers[i] && m.count(target - numbers[i]) > 0) {
                a = i + 1;
                b = target - numbers[i];
                break;
            }
        }

        for(int i = 0; i < numbers.size(); i++) {
            if (numbers[i] == b && (a != (i + 1))) {
                b = i + 1;
                break;
            }
        }

        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);

        return ans;
    }
};
