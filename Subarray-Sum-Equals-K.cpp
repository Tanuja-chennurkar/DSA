class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>hashmap;
        int count=0;
        int csum=0;
        hashmap[0]=1;

        for(int num: nums){
            csum+=num;

            if(hashmap.find(csum-k)!=hashmap.end()){
                count+=hashmap[csum-k];
            }

            hashmap[csum]++;
        }
        return count;
    }
};