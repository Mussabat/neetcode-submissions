class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int max_size = 0;
        unordered_map<char, int>repeat;
        int left = 0;
        for(int right = 0; right < s.size(); right++) {
            char now = s[right];

            if(repeat.find(now) != repeat.end() && repeat[now] >= left) {
                left = repeat[now] + 1;
            }
            repeat[now] = right;
            max_size = max(max_size, right - left + 1);
        }
        return max_size;
    }
};
