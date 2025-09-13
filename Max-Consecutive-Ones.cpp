class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left =0;
        int right=nums.size();
        int count=0;
        int maxc=0;
        while(left<right){
            if(nums[left]==1){
                count=count+1;
                
            }
            else if(nums[left]==0){
                count=0;
            }
            left++;
            maxc=max(maxc,count);
        }
    return maxc;
    }
};