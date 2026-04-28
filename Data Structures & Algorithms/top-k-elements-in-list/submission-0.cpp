class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      multiset<int>m(nums.begin(), nums.end());
      vector<pair<int, int>>v;
      set<int>s;
      for(int i = 0; i < nums.size(); i++) {
        if(!s.count(nums[i])) {
            int d = m.count(nums[i]);
            v.push_back({d, nums[i]});
        }
        s.insert(nums[i]);
      }

      sort(v.begin(), v.end());
      int c = 0;
      vector<int>ans;
      for(int i = v.size() - 1; ; i--) {
        if(c == k) break;
        ans.push_back(v[i].second);
        c++;
      }

      return ans;
      

    }
};
