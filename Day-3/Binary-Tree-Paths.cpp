//Given the root of a binary tree, return all root-to-leaf paths in any order.
//A leaf is a node with no children.

class Solution {
public:
    void dfs(TreeNode* root, string temp, vector<string>& ans){
        // bc
        if(!root) return;
        if(!root->left && !root->right){
            //as this is leaf node so no need to add "->"
            temp+= to_string(root->val);
            ans.push_back(temp);

        }

        //to add path to leaf + -> as we have still not reached leaf node
        temp+= to_string(root->val) + "->";
        // rr
        dfs(root->left, temp, ans);
        dfs(root->right, temp, ans);

        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp="";
        dfs(root, temp, ans);
        return ans;

        
    }
};