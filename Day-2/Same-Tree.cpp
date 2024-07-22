
class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
    
        if (p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL)  return false;
        if(p->val!=q->val) return false;
        int booli1=isSameTree(p->left,q->left);
        if(!booli1)return false;
        int booli2=isSameTree(p->right,q->right);
        if(!booli2)return false;
        return true;

        // if(p==NULL && q==NULL) return true;
        // if(p==NULL || q==NULL) return false;
        // return(p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));    
    }
};