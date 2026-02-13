1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        nums.erase(unique(nums.begin(),nums.end()),nums.end());
6        int size=nums.size();
7        if(size>=3){
8            return nums[size-3];
9        }
10        else{
11            return nums[size-1];
12        }
13        return 0;
14    }
15};