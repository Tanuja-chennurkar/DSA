1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        sort(intervals.begin(),intervals.end());
5
6        vector<vector<int>> result;
7        result.push_back(intervals[0]);
8
9        for(int i=0;i<intervals.size();i++){
10            vector<int>& last=result.back();
11            if(intervals[i][0]<=last[1]){
12                last[1]=max(intervals[i][1],last[1]);
13            }
14            else{
15                result.push_back(intervals[i]);
16            }
17        }
18
19        return result;
20    }
21};