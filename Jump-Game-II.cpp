1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int n=nums.size();
5        vector<int>dp(n+1,INT_MAX);
6
7        dp[0]=0;
8
9        for(int i=0;i<n;i++){
10            if(dp[i]==INT_MAX) continue;
11            int maxj=nums[i];
12            for(int j=i+1;j<=i+maxj&&j<n;j++){
13                dp[j]=min(dp[j],dp[i]+1);
14            }
15        }
16
17        return dp[n-1];
18    }
19};