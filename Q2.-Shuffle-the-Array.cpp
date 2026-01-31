1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> result;
5        int s=nums.size();
6        for(int i=0;i<n;i++){
7            result.push_back(nums[i]);
8            result.push_back(nums[i+n]);
9        }
10        return result;
11    }
12};