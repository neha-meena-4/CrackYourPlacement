
class Solution {
public:
    void mergeFun(TreeNode* root1, TreeNode* root2)
    {
      if(root1==NULL || root2==NULL) return;
      if(root1->left&& root2->left) root1->left->val=root1->left->val+root2->left->val;
      if(root1->left&& !root2->left)root1->left->val=root1->left->val;
      if(!(root1->left)&& root2->left)
      {
        TreeNode* node =new TreeNode(root2->left->val);
        root1->left=node;
      }

      if(root1->right&& root2->right)root1->right->val=root1->right->val+root2->right->val;
      if(root1->right&& !root2->right)root1->right->val=root1->right->val;
      if(!(root1->right)&& root2->right)
      {
        TreeNode* node =new TreeNode(root2->right->val);
        root1->right=node;
      }

      mergeFun(root1->left,root2->left);
      mergeFun(root1->right,root2->right);

    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL) return root2;
        if(root2==NULL) return root1;
        if(root1 && root2) root1->val=root1->val + root2->val;
        mergeFun(root1,root2);
        return root1;
    }
   
};