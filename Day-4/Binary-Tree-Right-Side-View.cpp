/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

//METHOD-1:- BY USING LEVEL ORDER TRAVERSAL
     void levelOrder(TreeNode* root, vector<int> &v)
    {
        queue<TreeNode* >q;
  
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
              
                if(i==count-1)
                    v.push_back(curr->val);
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            
        }
    }
    
/*
METHOD2:- DFS APPROACH
    void printRight(TreeNode* root, vector<int> &v,int &maxlevel, int level)
    {
        if(root==NULL) return;
        if(maxlevel<level)
        {
            v.push_back(root->val);
            maxlevel=level;
        }
        printRight(root->right,v,maxlevel,level+1);
        printRight(root->left,v,maxlevel,level+1);
        
    } 

    */
    
    vector<int> rightSideView(TreeNode* root) 
    {   
        vector<int>v;
        if(root==NULL) return v;
        levelOrder(root,v);
        /* int maxlevel=0,level=1;
        printRight(root,v,maxlevel,level);*/
        return v;
    }
};