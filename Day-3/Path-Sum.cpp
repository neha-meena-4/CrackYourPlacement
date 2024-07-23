
class Solution {
public:
    bool check(TreeNode* root, int target)
    {
        if(root==NULL)return false;
        if(!root->left && !root->right)//to check if it is leaf node
        {
            if(target==root->val )return true;  
        }
        //if either of the subtree gives targetSum return true
        return check(root->left,target- root->val)|| check(root->right,target- root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return    check(root,targetSum);
    }
};

