/*
1st method:-  using dfs to find height of tree
2nd and 3rd Method :- Level Order Traversal using queue and stack. 
*/
class Solution {
public:
    //1st METHOD:- using dfs to find height of tree
    int height(TreeNode* root)
    {
        if(root==NULL)return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }

    int maxDepth(TreeNode* root) {
         return height(root);
/*  
METHOD 2:- USING QUEUE
      if(root==NULL)return 0;
        int ht=0;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            ht++;
            for(int i=0;i<count;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
        }
        return ht;
*/ 
      

/*
METHOD 3:- USING STACK
    
         if(root==NULL)return 0;
        int ht=0;
        stack<TreeNode *>s;
        s.push(root);
        while(!s.empty())
        {
            int count=s.size();
            ht++;
            for(int i=0;i<count;i++)
            {
                TreeNode *node=s.top();
                s.pop();
                if(node->left!=NULL) s.push(node->left);
                if(node->right!=NULL) s.push(node->right);
                
            }
        }
        return ht;
*/
       
    }
};