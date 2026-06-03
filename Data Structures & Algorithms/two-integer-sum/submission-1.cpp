class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];
            if (hashmap.find(x) != hashmap.end())
                return {hashmap[x], i};
            hashmap.insert({nums[i], i});
        }
        return {};
    }
};