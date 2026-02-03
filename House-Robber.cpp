1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> dp(n);
6        if(n==1) return nums[0];
7
8        dp[0]=nums[0];
9        dp[1]=max(nums[0],nums[1]);
10
11        for(int i=2;i<n;i++){
12            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
13        }
14        return dp[n-1];
15    }
16};