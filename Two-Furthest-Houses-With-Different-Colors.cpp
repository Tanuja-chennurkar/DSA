1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int ans=0;
5        int n=colors.size();
6        for(int i=0;i<n;i++){
7            if(colors[i]!=colors[n-1]){
8                ans=max(ans,n-1-i);
9            }
10        }
11        for(int j=n-1;j>=0;j--){
12            if(colors[j]!=colors[0]){
13                ans=max(ans,j);
14            }
15        }
16        return ans;
17    }
18};