1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& points) {
4        //sort(points.begin(),points.end());
5        sort(points.begin(), points.end(),
6     [](const vector<int>& a, const vector<int>& b) {
7         return a[1] < b[1];
8     });
9        int count=1;
10        int ongoing=points[0][1];
11        for(int i=1;i<points.size();i++){
12            if(ongoing<points[i][0]){
13                count++;
14                ongoing=points[i][1];
15            }
16        }
17        return count;
18    }
19};