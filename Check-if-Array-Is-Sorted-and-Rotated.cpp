1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int count=0;
5        int n=nums.size();
6        for(int i=0;i<n-1;i++){
7            if(nums[i]>nums[i+1]){
8                count++;
9            }   
10        }
11        if(nums[0]<nums[n-1]){
12            count++;
13        }
14        return count<=1?true:false;
15    }
16};