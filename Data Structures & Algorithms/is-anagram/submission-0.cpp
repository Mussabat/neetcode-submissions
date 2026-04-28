class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>ss;
        vector<char>tt;
        for(int i = 0; i < s.size(); i++) ss.push_back(s[i]);
        for(int i = 0; i < t.size(); i++) tt.push_back(t[i]);
        if(tt.size() != ss.size()) return false;
        sort(ss.begin(), ss.end());
        sort(tt.begin(), tt.end());
        for(int i = 0; i < ss.size(); i++) {
            if(ss[i] != tt[i]) {
                return false;
            }
        }
     return true;

        
    }
};
