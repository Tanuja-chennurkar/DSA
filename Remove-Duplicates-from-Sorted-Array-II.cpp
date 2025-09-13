class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int left=2;
        if(n<3) return n;
        for(int right=2;right<n;right++){
            if(nums[right]!=nums[left-2]){
                nums[left]=nums[right];
                left++;
            }    
        }
        return left;
    }
};