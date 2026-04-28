class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        for(int i = 0; i < temperatures.size(); i++) {
            int c = 0;
            for(int j = i + 1; j < temperatures.size(); j++) {
                if(temperatures[i] < temperatures[j]) {
                    c = j - i;
                    break;
                }
            }

            ans.push_back(c);
        }

        return ans;
    }
};
