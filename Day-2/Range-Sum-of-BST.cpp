
class Solution {
public:
//METHOD 1:- USING BFS TRAVERSAL

    // int sum=0;
    // int  bfs(TreeNode* root,int low,int high)
    // {
    //     if(root==NULL)return 0;
    //     if(root->val<= high && root->val>=low) sum+=root->val;
    //     bfs(root->left,low,high);
    //     bfs(root->right,low,high);
    //     return sum;
    // }

//METHOD 2:- USING DFS TRAVERSAL
    int dfs(TreeNode* root, int low, int high, int &sum)
    {
        if(root== NULL)return 0;
        dfs(root->left,low,high,sum);
        if(root->val >= low && root->val<= high)
        { sum+= root->val;}
        dfs(root->right,low,high,sum);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        // return  bfs(root,low,high);
        int sum=0;
        return dfs(root,low,high,sum);
    }
};