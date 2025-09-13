class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int num:nums){
            hashmap[num]++;
        }

        for(auto&ch:hashmap){
            if(ch.second==1){
                return ch.first;
            }
        }
        return -1;
    }
};