class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        for (int i=0;i<number.length()/2;i++) {
            if (number.at(i)==number.at(number.length()-1-i)) {
                continue;
            } else return false;
        }
        return true;
    }
};