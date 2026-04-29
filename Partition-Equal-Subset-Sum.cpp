1class Solution {
2public:
3    bool canPartition(vector<int>& nums) {
4        int total=accumulate(nums.begin(),nums.end(),0);
5        if(total%2!=0) return false;
6
7        int target=total/2;
8        int n=nums.size();
9        vector<vector<bool>> dp(n+1,vector<bool>(target+1,false));
10        for(int i=0;i<=n;i++){
11            dp[i][0]=true;
12        }
13        for(int i=1;i<=n;i++){
14            for(int j=1;j<=target;j++){
15                if(nums[i-1]<=j){
16                    dp[i][j]=dp[i-1][j]||dp[i-1][j-nums[i-1]];
17                }
18                else{
19                    dp[i][j]=dp[i-1][j];
20                }
21            }
22        }
23        return dp[n][target];
24    }
25};