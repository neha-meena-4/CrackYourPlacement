/*“The lowest common ancestor is defined between two nodes p and q as the lowest node
 in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
*/
class Solution {
public:
    TreeNode* commonNode(TreeNode* root, TreeNode* p, TreeNode* q) 
       { 
        TreeNode* left= lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        //if both left & right not NULL means, they are in diff subtree so return root 
        if(left && right) return root;
        //if either  of left & right is NULL means, they are in same subtree so return root
        return (left!=NULL)?left:right;
        }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL||root==p || root==q)return root;
       return commonNode(root,p,q);
    }
};