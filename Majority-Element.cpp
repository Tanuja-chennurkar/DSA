class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int k=0;

        for(int i=0;i<nums.size();i++){
            if(count==0){
                k=nums[i];
            }
            count+=(nums[i]==k)?1:-1;
        }
        return k;
    }
};