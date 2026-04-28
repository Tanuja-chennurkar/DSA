1class Solution {
2public:
3    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
4        int m=obstacleGrid.size();
5        int n=obstacleGrid[0].size();
6
7        vector<vector<int>> dp(m,vector<int>(n,0));
8        for(int i=0;i<n;i++){
9            if(obstacleGrid[0][i]==0){
10                dp[0][i]=1;
11            }
12            else break;
13        }
14        for(int j=0;j<m;j++){
15            if(obstacleGrid[j][0]==0) dp[j][0]=1;
16            else break;
17        }
18
19        for(int i=1;i<m;i++){
20            for(int j=1;j<n;j++){
21                if(obstacleGrid[i][j]==0)
22                dp[i][j]=dp[i-1][j]+dp[i][j-1];
23            }
24        }
25        return dp[m-1][n-1];
26    }
27};