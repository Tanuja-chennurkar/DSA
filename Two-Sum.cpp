class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;

        for(int i=0;i<nums.size();i++){
            int c= target-nums[i];
            if(hashmap.find(c)!=hashmap.end()){
                return {hashmap[c],i};
            }
            hashmap[nums[i]]=i;
        }
        return {};
    }
};