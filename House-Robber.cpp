1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> dp(n);
6        //if(n==1) return nums[0];
7
8        dp[0]=nums[0];
9       
10
11        for(int i=1;i<n;i++){
12            int pick=nums[i];
13            if(i>1) pick+=dp[i-2];
14            int notpick=dp[i-1];
15            dp[i]=max(pick,notpick);
16        }
17        return dp[n-1];
18    }
19};