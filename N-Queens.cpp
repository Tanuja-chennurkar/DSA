1class Solution {
2public:
3    vector<vector<string>> result;
4    bool isSafe(int row,int col,vector<string> &board,int n){
5        for(int i=0;i<row;i++){
6            if(board[i][col]=='Q') return false;
7        }
8        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
9            if(board[i][j]=='Q')    return false;
10        } 
11        for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++) {
12            if(board[i][j]=='Q')    return false;
13        }
14        return true;
15    }
16    void solve(int row,vector<string> &board,int n){
17        if(row==n){
18            result.push_back(board);
19            return;
20        }
21
22        for(int col=0;col<n;col++){
23            if(isSafe(row,col,board,n)){
24                board[row][col]='Q';
25                solve(row+1,board,n);
26                board[row][col]='.';
27            }
28        }
29    }
30    vector<vector<string>> solveNQueens(int n) {
31        
32       vector<string> board(n,string(n,'.'));
33       solve(0,board,n);
34       return result;
35
36    }
37};