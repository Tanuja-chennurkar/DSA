1class Solution {
2public:
3    int maxFrequency(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5        long long sum=0;
6        int l,r=0;
7        int result=0;
8
9        while(r<nums.size()){
10            sum+=nums[r];
11            while((long long)nums[r]*(r-l+1)>sum+k){
12                sum-=nums[l];
13                l++;
14            }
15            result=max(result,r-l+1);
16            r++;
17        }
18        return result;
19    }
20};