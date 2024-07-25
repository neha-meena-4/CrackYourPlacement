
class Solution {
public:
    int checkheight(TreeNode *root)
    {
        if(root==NULL) return 0 ;
        int lh=checkheight(root->left);
        if(lh==-1)return -1;
        int rh=checkheight(root->right);
        if(rh==-1)return -1;
        if(abs(lh-rh)>1)return -1;
        else
            return(max(lh,rh)+1);
    
    }
    bool isBalanced(TreeNode* root) {
        
        int ans=checkheight(root);
        if(ans==-1)
            return false;
        return true;

    }
};
Balanced Binary Tree
Binary Search Tree Iterator
Binary Tree Level Order traversal
Binary Tree Right Side View
Predecessor and Successor
Sum of Left Leaves
Validate Binary Search Tree