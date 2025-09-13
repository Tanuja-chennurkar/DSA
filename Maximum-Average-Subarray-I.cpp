class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        int csum=0;
        int msum=0;
        for(int i =0;i<k;i++){
            csum=csum+nums[i];
        }
        msum=csum;
        for(int i=k;i<n;i++){
            csum=csum+ nums[i]-nums[i-k];
            msum=max(msum,csum);
        }
        
        return static_cast<double>(msum)/k;
    }
};