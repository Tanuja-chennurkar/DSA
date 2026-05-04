1class Solution {
2public:
3    int longestPalindromeSubseq(string s) {
4        int n=s.size();
5        string s1=s;
6        reverse(s.begin(),s.end());
7        string s2=s;
8        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
9
10        for(int i=1;i<=n;i++){
11            for(int j=1;j<=n;j++){
12                if(s1[i-1]!=s2[j-1]){
13                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
14                }
15                else{
16                    dp[i][j]=1+dp[i-1][j-1];
17                }
18            }
19        }
20        return dp[n][n];
21    }
22};