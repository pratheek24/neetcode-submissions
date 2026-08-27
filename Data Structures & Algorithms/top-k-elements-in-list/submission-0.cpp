class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //frequency
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }

        //min-heap
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> heap; 
        for(auto& it : freq){
            heap.push({it.second, it.first});
            //only k elements required 
            if(heap.size() > k){
                heap.pop();
            }
        }

        //print values from heap
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(heap.top().second);
            heap.pop();
        }

        return res;
    }
};
