class Solution {
public:
    bool isAnagram(string s, string t) {
      char freq_s[128];
      char freq_t[128];
      for(char i = 'a'; i <= 'z'; i++) {
        freq_s[i] = 0;
        freq_t[i] = 0;
      }

      for(int i = 0; i < s.size(); i++) {
        freq_s[s[i]]++;
      }

       for(int i = 0; i < t.size(); i++) {
        freq_t[t[i]]++;
      }
    

    for(char i = 'a'; i <= 'z'; i++) {
        if(freq_s[i] != freq_t[i]) return false; 
    }
    return true;
    }
};
