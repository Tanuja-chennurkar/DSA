1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        vector<int> result;
5        sort(nums.begin(),nums.end());
6        int i=0;
7        int j=1;
8
9        while(j<nums.size()){
10            if(nums[i]==nums[j]){
11                result.push_back(nums[j]);
12                i=j;
13                j++;
14            }
15            else{
16                i++;
17                j++;
18            }
19        }
20        return result;
21    }
22};