1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int> result;
5        if(matrix.empty()) return result;
6
7        int row=matrix.size();
8        int col=matrix[0].size();
9
10        int top=0;
11        int bottom=row-1;
12        int left=0;
13        int right=col-1;
14
15        while(left<=bottom && left<=right){
16            for(int j=left;j<=right;j++){
17                result.push_back(matrix[top][j]);
18            }
19            top++;
20            for(int i=top;i<=bottom;i++){
21                result.push_back(matrix[i][right]);
22            }
23            right--;
24            if(top<=bottom){
25            for(int j=right;j>=left;j--){
26                result.push_back(matrix[bottom][j]);
27            }
28            bottom--;
29            }
30            if(left<=right){
31                for(int i=bottom;i>=top;i--){
32                    result.push_back(matrix[i][left]);
33                }
34                left++;
35            }
36        }
37        return result;
38    }
39};