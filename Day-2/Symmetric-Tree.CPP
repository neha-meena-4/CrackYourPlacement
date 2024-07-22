//We will check if left and right subtree are mirror image or not by using identical tree approach
class Solution {
public:
    bool toCheckSymmetry(TreeNode* root1, TreeNode* root2)
    {
        if(root1==NULL && root2==NULL)return true;
        if(root1==NULL || root2==NULL)return false;
        return (root1->val==root2->val && toCheckSymmetry(root1->left,root2->right) && toCheckSymmetry(root1->right,root2->left));
    }
    bool isSymmetric(TreeNode* root) {
        
        return toCheckSymmetry(root->left,root->right);
        
    }
};

