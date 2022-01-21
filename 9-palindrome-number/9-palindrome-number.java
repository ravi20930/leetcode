class Solution {
    public boolean isPalindrome(int x) {
        
        String _check = String.valueOf(x);
        for (int i = 0; i < _check.length()/2; i++) {
            if (_check.charAt(i) == _check.charAt(_check.length()-1-i)) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
}