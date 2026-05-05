1class Solution {
2public:
3    string shortestCommonSupersequence(string str1, string str2) {
4        int n=str1.size();
5        int m=str2.size();
6        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
7        for(int i=1;i<=n;i++){
8            for(int j=1;j<=m;j++){
9                if(str1[i-1]!=str2[j-1]){
10                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
11                }
12                else{
13                    dp[i][j]=1+dp[i-1][j-1];
14                }
15            }
16        }
17
18        string scs="";
19        while(n>0&&m>0){
20            if(str1[n-1]==str2[m-1]){
21                scs.push_back(str1[n-1]);
22                n--;
23                m--;
24            }
25            else if(dp[n-1][m]>dp[n][m-1]){
26                scs.push_back(str1[n-1]);
27                n--;
28            }
29            else{
30                scs.push_back(str2[m-1]);
31                m--;
32            }
33        }
34        while(n>0){
35            scs.push_back(str1[n-1]);
36            n--;
37        }
38        while(m>0){
39            scs.push_back(str2[m-1]);
40            m--;
41        }
42        reverse(scs.begin(),scs.end());
43        return scs;
44    }
45};