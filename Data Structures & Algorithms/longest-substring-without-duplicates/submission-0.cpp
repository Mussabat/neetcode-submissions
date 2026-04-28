class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int ans = 0;
      set<char>check;
      int l = 0;
      for(int r = 0; r < s.size(); r++) {
        while(check.count(s[r])) {
            check.erase(s[l]);
            l++;
        }
        check.insert(s[r]);
        ans = max(ans, r - l + 1);
      }
      return ans;
    }
};
