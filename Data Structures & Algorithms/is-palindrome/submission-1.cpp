class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for(int i = 0; i < s.size(); i++) {
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                ss += tolower(s[i]);
            }
        }
        string sss = "";
        for(int i = ss.size() - 1; i >= 0; i--) {
            sss += ss[i];
        }
        if(ss == sss) return true;
        else return false;
    }
};
