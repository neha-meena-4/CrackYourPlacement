class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int m,int n , int cellcolor)
    {
        if(sr>=m || sr<0 || sc>=n || sc<0 || image[sr][sc]!=cellcolor || image[sr][sc]==color)
        return;

        image[sr][sc]=color;

        dfs(image, sr, sc-1, color, m, n, cellcolor);
        dfs(image, sr, sc+1, color, m ,n,cellcolor);
        dfs(image, sr-1, sc, color, m, n,cellcolor);
        dfs(image, sr+1, sc, color, m ,n,cellcolor);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // if(image[sr][sc] == color){
        //     return image;
        // }
        int m=image.size();
        int n=image[0].size();
        int cellcolor =image[sr][sc];
            dfs(image,sr,sc,color,m,n, cellcolor);
        return image;
    }
};