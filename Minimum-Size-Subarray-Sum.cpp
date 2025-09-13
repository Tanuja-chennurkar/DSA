class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int total=0;
        int minimum=INT_MAX;

        while(right<nums.size()){
            total=total+nums[right];
            while (total>=target){
                minimum=min(minimum,right-left+1);
                total=total-nums[left];
                left++;
            }
            right++;
        }
        return (minimum==INT_MAX)?0:minimum;
    }
};