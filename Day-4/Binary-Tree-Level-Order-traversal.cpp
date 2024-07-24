
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            vector<int>v;
            for(int i=0;i<count;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left){q.push(curr->left);}
                if(curr->right){q.push(curr->right);}
            }
            ans.push_back(v);
        }
        return ans;

    }
};