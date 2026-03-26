1class Solution {
2public:
3    int maxrow(vector<vector<int>>& mat,int col,int n,int m){
4        int maxvalue=-1;
5        int ind=-1;
6        for(int i=0;i<n;i++){
7            if(mat[i][col]>maxvalue){
8                maxvalue=mat[i][col];
9                ind=i;
10            }
11        }
12        return ind;
13    }
14    vector<int> findPeakGrid(vector<vector<int>>& mat) {
15        int row=mat.size();
16        int col=mat[0].size();
17
18        int low=0;
19        int high=col-1;
20
21        while(low<=high){
22            int mid=low+(high-low)/2;
23            int maxind=maxrow(mat,mid,row,col);
24            int left=mid-1>=0?mat[maxind][mid-1]:-1;
25            int right=mid+1<col?mat[maxind][mid+1]:-1;
26            if(mat[maxind][mid]>left&&mat[maxind][mid]>right){
27                return {maxind,mid};
28            }
29            else if(mat[maxind][mid]<left){
30                high=mid-1;
31            }
32            else{
33                low=mid+1;
34            }
35        }
36        return {-1,-1};
37
38    }
39
40};