1class Solution {
2public:
3    bool ispossible(vector<int>& nums, int divisor,int threshold){
4        long sum=0;
5        for(int i=0;i<nums.size();i++){
6            sum+=ceil((double)nums[i]/divisor);
7        }
8        return sum<=threshold;
9    }
10    int smallestDivisor(vector<int>& nums, int threshold) {
11        int low=1;
12        int high=*max_element(nums.begin(),nums.end());
13        int ans=0;
14
15        while(low<=high){
16            int mid=low+(high-low)/2;
17            if(ispossible(nums,mid,threshold)){
18                ans=mid;
19                high=mid-1;
20            }
21            else{
22                low=mid+1;
23            }
24        }
25        return ans;
26    }
27};