class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>count;
        int l=-1;
        for(int num:arr){
            count[num]++;
        }
        for(auto& pair:count){
            if(pair.first==pair.second){
                l=max(l,pair.first);
            }
        }
        return l;
    }
};