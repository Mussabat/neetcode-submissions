class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size() != s.size()) return false;
        vector<int>ss(130);
        vector<int>tt(130);
        for(int i = 0; i < s.size(); i++) {
           ss[s[i]]++;
        }
         for(int i = 0; i < t.size(); i++) {
           tt[t[i]]++;
        }
      
     return ss == tt;

        
    }
};
