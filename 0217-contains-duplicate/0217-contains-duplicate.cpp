class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> counts;

    for (int i = 0; i < nums.size(); i++) {
        counts[nums[i]]++;
        if (counts[nums[i]] == 2) {
            return true;
        }
    }

    return false;
    }
};