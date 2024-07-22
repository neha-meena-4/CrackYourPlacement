//A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. 
//The tree tree could also be considered as a subtree of itself.


class Solution {
public:
    bool identical(TreeNode* root, TreeNode* subRoot)
    {
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL || subRoot==NULL) return false;
        return (root->val== subRoot->val) && identical(root->left,subRoot->left) && identical(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(root==NULL) return false;
       if(identical(root,subRoot))return true;//for 1st time it will if bor=th trees are completely identical

       return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);// to check if subtree is either present on right or left side of main tree
    }
};