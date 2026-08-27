class Solution {
public:
    bool isAnagram(string s, string t) {
        int slength = s.length();
        int tlength = t.length();

        if( slength != tlength) return false; 

        unordered_map<char, int> sMap; 
        unordered_map<char, int> tMap; 

        for(int i =0; i<slength; i++){
            if(s.contains(s[i])){
                sMap[s[i]]++;
            }else{
                sMap[s[i]] = 1;
            }
        }

        for(int i =0; i<tlength; i++){
            if(tMap.contains(t[i])){
                tMap[t[i]]++;
            }else{
                tMap[t[i]] = 1;
            }
        }

        if(sMap == tMap)
            return true;

        return false;
    }
};
