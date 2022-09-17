class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++) {
            if (i==nums.size()-1 && target>nums[i]) {
                return i+1;
            } else if (target<nums[i] && i==0) {
                return 0;
            } else if (target>nums[i] && target<nums[i+1]) {
                return i+1;
            } else if (target==nums[i]) {
                return i;
            } else continue;
        }
        return -1;
    }
};