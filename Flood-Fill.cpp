class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc,int ocolor ,int ncolor){
        if(sr>=image.size()||sr<0||sc>=image[0].size()||sc<0||image[sr][sc]==ncolor||image[sr][sc]!=ocolor){
            return;
        }
        image[sr][sc]=ncolor;
        dfs(image,sr+1,sc,ocolor,ncolor);
        dfs(image,sr-1,sc,ocolor,ncolor);
        dfs(image,sr,sc+1,ocolor,ncolor);
        dfs(image,sr,sc-1,ocolor,ncolor);
    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int ncolor) {
        int ocolor=image[sr][sc];
        dfs(image,sr,sc,ocolor,ncolor);
        return image;
    }
};