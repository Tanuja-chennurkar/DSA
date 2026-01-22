1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if(k==0) return 0;
5        int left=0;
6        int ans=0;
7        int total=1;
8
9        for(int i=0;i<nums.size();i++){
10            total*=nums[i];
11            while(total>=k){
12                if(left>i) return ans;
13                total/=nums[left];
14                left++;
15            }
16            if(total==0) return 0;
17            ans=ans+(i-left+1);
18        }
19        return ans;
20    }
21};