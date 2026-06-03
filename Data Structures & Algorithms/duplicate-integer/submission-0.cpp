class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++)
            if (hashmap.find(nums[i]) != hashmap.end()) return true;
            else hashmap.insert({nums[i], i});
        return false;
    }
};