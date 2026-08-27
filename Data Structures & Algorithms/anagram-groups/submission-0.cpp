class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> hash;
        for(int i = 0; i<strs.size(); i++){
            vector<int> chars(26,0);
            for(int j=0; j< strs[i].size(); j++){
                chars[strs[i][j]-'a']++;
            }
            hash[chars].push_back(strs[i]);
        }
        vector<vector<string>> groupAnagrams;
        for(auto it = hash.begin(); it != hash.end(); it++){
            groupAnagrams.push_back(it->second);
        }
        return groupAnagrams;
    }
};
