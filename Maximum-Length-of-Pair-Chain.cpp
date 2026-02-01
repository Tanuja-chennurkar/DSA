1class Solution {
2public:
3    int findLongestChain(vector<vector<int>>& pairs) {
4        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
5         return a[1] < b[1];
6     });
7
8     int count=1;
9     int ongoing=pairs[0][1];
10     for(int i=1;i<pairs.size();i++){
11        if(ongoing<pairs[i][0]){
12            count++;
13            ongoing=pairs[i][1];
14        }
15     }
16     return count;
17    }
18};