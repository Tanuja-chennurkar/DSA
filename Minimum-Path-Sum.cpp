1class Solution {
2public:
3    // int helper(int i,int j,vector<vector<int>>& grid){
4    //     if(i==0&&j==0) return grid[i][j];
5    //     if(i<0||j<0) return INT_MAX/2;
6
7    //     int up=grid[i][j]+helper(i-1,j,grid);
8    //     int left=grid[i][j]+ helper(i,j-1,grid);
9    //     return min(up,left);
10    // }
11    int minPathSum(vector<vector<int>>& grid) {
12        int n=grid.size();
13        int m=grid[0].size();
14        vector<vector<int>>dp(n,vector<int>(m));
15        for(int i=0;i<n;i++){
16            for(int j=0;j<m;j++){
17            if(i==0&&j==0)  dp[i][j]=grid[0][0];
18            else{
19                int up=INT_MAX;
20                int left=INT_MAX;
21                if(i>0){ up=grid[i][j]+dp[i-1][j];}
22                if(j>0){ left=grid[i][j]+ dp[i][j-1];}
23            dp[i][j]=min(up,left);
24            }
25            }
26        }
27        return dp[n-1][m-1];
28    }
29};