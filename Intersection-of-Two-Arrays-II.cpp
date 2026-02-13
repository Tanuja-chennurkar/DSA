1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> result;
5        sort(nums1.begin(),nums1.end());
6        sort(nums2.begin(),nums2.end());
7        int i=0;
8        int j=0;
9
10        while(i<nums1.size()&&j<nums2.size()){
11            if(nums1[i]==nums2[j]){
12                result.push_back(nums1[i]);
13                i++;
14                j++;
15            }
16            else if(nums1[i]<nums2[j]){
17                i++;
18            }
19            else{
20                j++;
21            }
22        }
23        return result;
24    }
25};