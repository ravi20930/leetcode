class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (int i=0;i<s.length();i++) {
            
            if (s.at(i)=='(' || s.at(i)=='{' || s.at(i)=='[') {
                stack.push(s.at(i));
            }
            if (s.at(i)==')') {
                if (!stack.empty() && stack.top()=='(') {
                    stack.pop();
                    continue;
                }
                return false;
            }
            if (s.at(i)=='}') {
                if (!stack.empty() && stack.top()=='{') {
                    stack.pop();
                    continue;
                }
                return false;
            }
            if (s.at(i)==']') {
                if (!stack.empty() && stack.top()=='[') {
                    stack.pop();
                    continue;
                }
                return false;
            }
        }
        if (stack.empty()) {
            return true;
        } else return false;
    }
};