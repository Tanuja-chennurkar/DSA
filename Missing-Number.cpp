1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n= nums.size();
5        int total=n*(n+1)/2;
6        int a=0;
7        for(int n:nums){
8            a+=n;
9        }
10        return total-a;
11    }
12};