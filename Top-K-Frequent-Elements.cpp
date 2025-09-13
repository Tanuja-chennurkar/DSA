class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto& num: freq){
            pq.push({num.second,num.first});
        }

        vector<int> ans;
        while(k>0 && !pq.empty()){
            int e= pq.top().second;
            pq.pop();
            ans.push_back(e);
            k--;
        }
        return ans;
    }
};