    vector<string>ans;// To store the answer

    void dfs(vector<vector<int>> &mat, int row,int col, string path ,int n)
    {
        if(row>=n|| row<0 || col>=n|| col<0|| mat[row][col]==0)
        return;
        
        if(row==n-1 && col==n-1) ans.push_back(path);//when path found
        
        
        mat[row][col]=0;//marking it so can't be revisit in same path
        
        dfs(mat,row,col-1,path + 'L',n);
        dfs(mat,row,col+1,path + 'R',n);
        dfs(mat,row-1,col,path + 'U',n);
        dfs(mat,row+1,col,path + 'D',n);
        
         mat[row][col]=1;//unmarking it so it can be consider in other path
        
    }
    
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n=mat.size();
        ans.clear();
        string path="";
        if(mat[0][0]==1)
            dfs(mat,0,0,path,n);
        return ans;
    }