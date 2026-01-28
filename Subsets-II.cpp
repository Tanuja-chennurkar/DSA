1class Solution {
2public:
3    void helper(int index,vector<int> &nums,vector<vector<int>> &result,vector<int> &temp){
4        result.push_back(temp);
5        for(int i=index;i<nums.size();i++){
6            if(i>index&&nums[i]==nums[i-1]){
7                continue;
8            }
9            temp.push_back(nums[i]);
10            helper(i+1,nums,result,temp);
11            temp.pop_back();
12            
13        }
14    }
15    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
16        sort(nums.begin(),nums.end());
17        vector<vector<int>> result;
18        vector<int> temp;
19        helper(0,nums,result,temp);
20        return result;
21    }
22};