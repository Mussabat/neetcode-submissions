class Solution {
public:
    bool isPalindrome(string s) {
       for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i]<= 'Z') {
            s[i] = s[i] + 32;
        }
       } 

       string ss = "";

        for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i]<= 'z' || s[i] >= '0' && s[i] <= '9') {
            ss += s[i];
        }
       } 

       s = ss;


        for(int i = 0; i < (s.size() / 2); i++) {
            if(s[i] != s[s.size() - i - 1]) {
                return false;
            }
        }

        return true;


    }
};
