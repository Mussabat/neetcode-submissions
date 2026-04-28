class Solution {
public:
    bool isValid(string s) {
       stack<char>ss;
       for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            ss.push(s[i]);
        }
        else if(ss.size() == 0) return false;
        else if(s[i] == ')' && ss.top() != '(') {
            return false;
        }

        else if(s[i] == '}' && ss.top() != '{') {
            return false;
        }

        else if(s[i] == ']' && ss.top() != '[') {
            return false;
        }

        else {
            ss.pop();
        }
       } 
       if(ss.size() != 0) return false;
       else return true;
    }
};
