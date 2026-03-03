1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> result;
5        int n=nums.size();
6        if(n<4){
7            return result;
8        }
9        sort(nums.begin(),nums.end());
10        for(int i=0;i<n-3;i++){
11            if(i>0&&nums[i]==nums[i-1]) continue;
12            for(int j=i+1;j<n-2;j++){
13                if(j>i+1&&nums[j]==nums[j-1]) continue;
14
15                int left=j+1;
16                int right=n-1;
17
18                while(left<right){
19                    long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
20                    if(sum==target){
21                        result.push_back({nums[i],nums[j],nums[left],nums[right]});
22                        while(left<right&&nums[left]==nums[left+1]) left++;
23                        while(left<right&&nums[right]==nums[right-1])right--;
24                        left++;
25                        right--;
26                    }
27                    else if(sum<target)left++;
28                    else right--;
29
30                }
31            }
32        }
33        return result;
34    }
35};