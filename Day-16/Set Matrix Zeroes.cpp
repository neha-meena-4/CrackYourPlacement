class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>v;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back(make_pair(i,j));
                }
            }
        }
        for(auto &x:v)
        {
            int j=x.first;
            int l=x.second;
            for(int k=0;k<n;k++)
            {
                matrix[j][k]=0;
            }
            for(int k=0;k<m;k++)
            {
                matrix[k][l]=0;
            }
        }
        
    
    }
};