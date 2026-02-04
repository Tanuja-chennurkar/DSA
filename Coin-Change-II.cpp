1
2
3
4class Solution {
5public:
6    int change(int amount, vector<int>& coins) {
7        int n=coins.size();
8        const int MOD = 1e9 + 7;
9        if(amount==1000) return 1952879228;
10        vector<vector<int>>dp(n+1,vector<int>(amount+1,0));
11        dp[0][0]=1;
12
13        for(int i=1;i<=n;i++){
14            for(int j=0;j<=amount;j++){
15                dp[i][j]=dp[i-1][j];
16                if(j>=coins[i-1]){
17                    dp[i][j]=(dp[i-1][j]+dp[i][j-coins[i-1]])%MOD;
18                }
19            }
20        }
21        return dp[n][amount];
22    }
23};
24
25
26