1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int n=word1.size();
5        int m=word2.size();
6        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
7        for(int i=1;i<=n;i++){
8            for(int j=1;j<=m;j++){
9                if(word1[i-1]!=word2[j-1]){
10                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
11                }
12                else{
13                    dp[i][j]=1+dp[i-1][j-1];
14                }
15            }
16        }
17        return n+m -(dp[n][m]*2);
18    }
19};