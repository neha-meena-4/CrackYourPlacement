
class Solution {
public:
    void swapSubtree(TreeNode* root){
        if(root==NULL) return;
        swapSubtree(root->left);
        swapSubtree(root->right);
         swap(root->left,root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
    swapSubtree(root);
    return root;
    }
};