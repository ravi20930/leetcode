class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int, int> map;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]!=val) {
                map.insert({i, nums[i]});
            } else {
                continue;
            }
        }
        int counter = 0;
        for (auto x:map) {
            nums[counter] = x.second;
            counter++;
        }
        return map.size();
    }
};