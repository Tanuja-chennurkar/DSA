1class Solution {
2public:
3    static bool cmp(vector<int>&a,vector<int>&b){
4        if(a[0]==b[0]) return a[1]>b[1];
5        return a[0]<b[0];
6    }
7    int maxEnvelopes(vector<vector<int>>& envelopes) {
8        sort(envelopes.begin(),envelopes.end(),cmp);
9        int ans=0;
10        int n=envelopes.size();
11        vector<int>dp(n,0);
12
13        for(int i=0;i<n;i++){
14            int low=0;
15            int high=ans;
16            while(low<high){
17            int mid=low+(high-low)/2;
18                if(dp[mid]>=envelopes[i][0]) high=mid;
19                else low=mid+1;
20            }
21            dp[low]=envelopes[i][1];
22            if(low==ans)ans++;
23        }
24        return ans;
25    }
26};