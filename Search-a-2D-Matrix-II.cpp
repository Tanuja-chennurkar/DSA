1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m=matrix.size();
5        int n=matrix[0].size();
6
7        int left=0;
8        int right=n-1;
9
10        while(left<m&&right>=0){
11            if(matrix[left][right]==target){
12                return true;
13            }
14            else if(target<matrix[left][right]){
15                right--;
16            }
17            else{
18                left++;
19            }
20        }
21       return false;
22    
23    }
24};