1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        vector<vector<int>> dp(m,vector<int>(n,0));
5
6        dp[0][0]=1;
7        for(int i=0;i<m;i++){
8            for(int j=0;j<n;j++){
9                int up=0;
10                int left=0;
11                if(i==0&&j==0) continue;
12                if(i>0) up=dp[i-1][j];
13                if(j>0) left=dp[i][j-1];
14
15                dp[i][j]=up+left;
16            }
17        }
18    return dp[m-1][n-1];
19    }
20};