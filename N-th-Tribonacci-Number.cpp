1class Solution {
2public:
3    int tribonacci(int n) {
4        if(n<2)return n;
5
6        vector<int>dp(n+1);
7        dp[0]=0;
8        dp[1]=1;
9        dp[2]=1;
10        for(int i=3;i<=n;i++){
11            dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
12        }
13        return dp[n];
14    }
15};