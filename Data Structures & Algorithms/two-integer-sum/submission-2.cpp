class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> sol;
        hash[nums[0]] = 0; 
        for(int i = 1; i< nums.size(); i++){
            if(hash.contains(target-nums[i])){
                sol.push_back(hash.at(target-nums[i]));
                sol.push_back(i);
                return sol;
            }
            hash[nums[i]]=i;
        }
        return sol;
    }
};
