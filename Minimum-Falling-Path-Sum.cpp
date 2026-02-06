1class Solution {
2public:
3    int minFallingPathSum(vector<vector<int>>& matrix) {
4        int n=matrix.size();
5        vector<vector<int>> dp(n,vector<int>(n));
6
7        for(int i=0;i<n;i++){
8            dp[0][i]=matrix[0][i];
9        }
10        for(int i=1;i<n;i++){
11            for(int j=0;j<n;j++){
12                
13
14                int up=dp[i-1][j];
15                int left=(j>0)?dp[i-1][j-1]:INT_MAX;
16                int diag=(j<n-1)?dp[i-1][j+1]:INT_MAX;
17                dp[i][j]=matrix[i][j]+min({up,left,diag});
18            }
19        }
20        int result=INT_MAX;
21        for(int i=0;i<n;i++){
22            result=min(dp[n-1][i],result);
23        }
24    return result;
25    }
26};