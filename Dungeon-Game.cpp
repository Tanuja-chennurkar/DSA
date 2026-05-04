1class Solution {
2public:
3    int calculateMinimumHP(vector<vector<int>>& dungeon) {
4        int row=dungeon.size();
5        int col=dungeon[0].size();
6
7        vector<vector<int>> dp(row,vector<int>(col,0));
8        dp[row-1][col-1]=max(1,1-dungeon[row-1][col-1]);
9
10        for(int i=row-2;i>=0;i--){
11            dp[i][col-1]=max(1,dp[i+1][col-1]-dungeon[i][col-1]);
12        }
13        for(int j=col-2;j>=0;j--){
14            dp[row-1][j]=max(1,dp[row-1][j+1]-dungeon[row-1][j]);
15        }
16
17        for(int i=row-2;i>=0;i--){
18            for(int j=col-2;j>=0;j--){
19                dp[i][j]=max(1,min(dp[i][j+1],dp[i+1][j])-dungeon[i][j]);
20            }
21        }
22        return dp[0][0];
23    }
24};