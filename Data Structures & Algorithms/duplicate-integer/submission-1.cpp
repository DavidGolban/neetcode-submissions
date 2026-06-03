class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int c : nums)
            if (set.find(c) != set.end()) return true;
            else set.insert(c);
        return false;
    }
};