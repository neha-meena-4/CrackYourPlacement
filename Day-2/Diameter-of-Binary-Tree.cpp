/**
The diameter of a binary tree is the length of the longest path between any two nodes in a tree.
This path may or may not pass through the root.
The length of a path between two nodes is represented by the number of edges between them.
 */
class Solution {
public:
    int dia=0;
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        dia=max(dia, lh+rh); //yha no of node in path return hora h
        return max(lh,rh)+1; //yha pathselect hora (by comparing left and right height)
    }
    int diameterOfBinaryTree(TreeNode* root) {
    height(root);
    return dia;  
    }
};

