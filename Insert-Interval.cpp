1
2class Solution {
3public:
4    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
5        vector<vector<int>> res;
6        int idx = 0;
7        int n = intervals.size();
8
9        while (idx < n) {
10            if (intervals[idx][0] < newInterval[0]) {
11                res.push_back(intervals[idx]);
12                idx++;
13            } else {
14                break;
15            }
16        }
17
18  
19        if (res.empty() || newInterval[0] > res.back()[1]) {
20            res.push_back(newInterval);
21        } else {
22            res.back()[1] = max(res.back()[1], newInterval[1]);
23        }
24
25        
26        while (idx < n) {
27            if (res.back()[1] >= intervals[idx][0]) {
28                res.back()[1] = max(res.back()[1], intervals[idx][1]);
29            } else {
30                res.push_back(intervals[idx]);
31            }
32            idx++;
33        }
34
35        return res;
36    }
37};
38