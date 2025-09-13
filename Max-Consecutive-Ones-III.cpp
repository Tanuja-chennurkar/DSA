class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int max_window=0;
        int num_zeros=0;

        while (right<nums.size()){
            if(nums[right]==0){
                num_zeros=num_zeros+1;
            }

            while(num_zeros>k){
                if(nums[left]==0){
                    num_zeros=num_zeros-1;
                }

                left++;
            }

            
            max_window=max(max_window,right-left+1);
            right++;
        }
        return max_window;
    }
};