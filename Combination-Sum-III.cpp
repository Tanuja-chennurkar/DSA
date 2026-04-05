1class Solution {
2public:
3    void helper(int idx,vector<int>&nums,vector<int>temp,vector<vector<int>> &result,int k,int n){
4        if(n==0&&temp.size()==k){
5            result.push_back(temp);
6            return;
7        }
8        if(n<0||temp.size()>k)return;
9        for(int i=idx;i<nums.size();i++){
10            temp.push_back(nums[i]);
11            helper(i+1,nums,temp,result,k,n-nums[i]);
12            temp.pop_back();
13        }
14    }
15    vector<vector<int>> combinationSum3(int k, int n) {
16       vector<int> nums={1,2,3,4,5,6,7,8,9}; 
17       vector<int>temp;
18       vector<vector<int>> result;
19
20       helper(0,nums,temp,result,k,n);
21       return result;
22    }
23};