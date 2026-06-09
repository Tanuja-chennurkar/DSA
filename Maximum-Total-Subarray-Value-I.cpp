1class Solution {
2public:
3    long long maxTotalValue(vector<int>& nums, int k) {
4        int maximum=*max_element(nums.begin(),nums.end());
5        int minimum=*min_element(nums.begin(),nums.end());
6        return (long long)(maximum-minimum)*k;
7         
8    }
9};