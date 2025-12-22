1class Solution {
2public:
3    void reverse(vector<int>&nums,int l,int r){
4        while(l<r){
5            swap(nums[l],nums[r]);
6            l++;
7            r--;
8        }
9    }
10    void rotate(vector<int>& nums, int k) {
11        int size=nums.size();
12        k%=size;
13        reverse(nums,0,size-1);
14        reverse(nums,0,k-1);
15        reverse(nums,k,size-1);
16    }
17};