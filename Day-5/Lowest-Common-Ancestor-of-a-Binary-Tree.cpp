
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;// when p, q both not present on this side
        if(p==root||q==root)return root;//either p or q is equal to root same side
        TreeNode* Lca1=lowestCommonAncestor(root->left,p,q);
        TreeNode* Lca2=lowestCommonAncestor(root->right,p,q);
        if(Lca1!=NULL && Lca2!=NULL) return root; // both present on different side then root will be its lowest common ancestor
        //when p & q both present on same side
        if(Lca1!=NULL) return Lca1; 
        else
        return Lca2;  
    }
};