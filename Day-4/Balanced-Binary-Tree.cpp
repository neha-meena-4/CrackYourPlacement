
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