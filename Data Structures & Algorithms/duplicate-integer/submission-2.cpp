class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> hash;
        for(int i = 0; i < n; i++){
            if(!hash.empty() && hash.contains(nums[i])){
                return true;
            }
            hash.insert(nums[i]);
        }
        return false;    
    }
};