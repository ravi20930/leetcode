class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> map;
        for (int i=0;i<nums.size();i++) {
            map[nums[i]]++;
        }
        int counter = 0;
        for (auto x : map) {
            nums[counter] = x.first;
            counter++;
        }
        return map.size();
    }
};