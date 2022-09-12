class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
 // initial charIndex is set to zero
    int charIndex = 0;
    for (int i = 0; i < strs[0].length(); i++)
    {
        int ok = 1;
        for (auto &word : strs)
        {
            if (charIndex >= word.length() || word[charIndex] != strs[0][charIndex])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            charIndex++;
        }
        else
        {
            break;
        }
    }
    return strs[0].substr(0, charIndex);
    }
};