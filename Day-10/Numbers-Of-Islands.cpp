class Solution {
public:

    

    void dfs(vector<vector<char>>& grid,int row,int col,int m,int n)
    {
        if(row>=m||row<0|| col>=n|| col<0|| grid[row][col]=='0')
            return ;
        
        grid[row][col]='0';
        dfs(grid,row,col+1,m,n);
        dfs(grid,row,col-1,m,n);
        dfs(grid,row+1,col,m,n);
        dfs(grid,row-1,col,m,n);
    }

    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(grid,i,j,m,n);
                }
            }
        }

        return count;
    }
};