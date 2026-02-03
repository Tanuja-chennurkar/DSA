1class Solution {
2public:
3    int canrob(vector<int>& nums,int l,int r) {
4        int n=r-l+1;
5        vector<int> dp(n);
6        if(n==1) return nums[l];
7
8        dp[0]=nums[l];
9
10
11        for(int i=1;i<n;i++){
12            int pick=nums[l+i];
13            if(i>1) pick+=dp[i-2];
14            int notpick=dp[i-1];
15            dp[i]=max(pick,notpick);
16        }
17        return dp[n-1];
18    }
19    int rob(vector<int>& nums) {
20        int n=nums.size();
21        if(n==1) return nums[0];
22        int c1=canrob(nums,1,n-1);
23        int c2=canrob(nums,0,n-2);
24        return max(c1,c2);
25    }
26};