class Solution {
   public:
    bool isValid(string s) {
        stack<char> brac;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                brac.push(s[i]);
            } else {
                if(brac.empty()) return false;
                char temp = brac.top();
                if (temp == '(' && s[i] != ')')
                    return false;
                else if (temp == '{' && s[i] != '}')
                    return false;
                else if (temp == '[' && s[i] != ']')
                    return false;
                else
                    brac.pop();
            }
        }

        if (brac.size() > 0) return false;

        return true;
    }
};
