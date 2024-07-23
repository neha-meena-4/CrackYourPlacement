
class Solution {
public:
    TreeNode *prev=NULL;
    void inorder(TreeNode* root,int &diff)
    {
        if(root==NULL)return ;
        inorder(root->left,diff);
        if(prev!=NULL)//for first time there will be no prev node so if condn will not satisfy
        {
            int mindiff=root->val-prev->val;
            diff=min(diff,mindiff);
        }
        prev=root;     //updating prev value
        inorder(root->right,diff);
    }

   
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL)return 0;
        int diff=INT_MAX;
        inorder(root,diff);
        return diff;

      
    }
};