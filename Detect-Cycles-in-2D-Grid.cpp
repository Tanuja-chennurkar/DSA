1class Solution {
2public:
3    int row;
4    int col;
5    vector<vector<bool>>visited;
6    int drows[4]={0,0,1,-1};
7    int dcols[4]={1,-1,0,0};
8
9    bool helper(int r,int c,int pr,int cr,vector<vector<char>>& grid){
10        visited[r][c]=true;
11        for(int k=0;k<4;k++){
12            int neighborr=r+drows[k];
13            int neighborc=c+dcols[k];
14
15            if(neighborr<0||neighborc<0||neighborr>=row||neighborc>=col) continue;
16            if(grid[neighborr][neighborc]!=grid[r][c]) continue;
17            if(!visited[neighborr][neighborc]){
18                if(helper(neighborr,neighborc,r,c,grid)) return true;
19            }
20            else if(neighborr!=pr||neighborc!=cr) return true;
21
22        }
23        return false;
24    }
25    bool containsCycle(vector<vector<char>>& grid) {
26        row=grid.size();
27        col=grid[0].size();
28
29        visited.assign(row,vector<bool>(col,false));
30        for(int i=0;i<row;i++){
31            for(int j=0;j<col;j++){
32                if(!visited[i][j]){
33                    if(helper(i,j,-1,-1,grid)){
34                        return true;
35                    }
36                }
37            }
38        }
39        return false;
40    }
41};