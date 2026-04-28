1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        vector<vector<int>>dp(m,vector<int>(n,1));
5        for(int i=1;i<m;i++){
6            for(int j=1;j<n;j++){
7                dp[i][j]=dp[i-1][j]+dp[i][j-1];
8            }
9        }
10        return dp[m-1][n-1];
11    }
12};