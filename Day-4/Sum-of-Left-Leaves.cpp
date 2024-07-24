
class Solution {
public:
    void helper(TreeNode* root,int &sum,bool flag)
    {
        if(root==NULL)return;
        if(!root->left && !root->right && flag==true)
        {
           sum+=root->val;
           return;
        }
        helper(root->left,sum,true);
        helper(root->right,sum,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        bool flag=false;
        helper(root,sum,flag);
        return sum;
    }
};