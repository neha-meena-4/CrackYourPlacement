
class Solution {
public:

//  METHOD-1:- DFS INORDER TRAVERSAL
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root==NULL)return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }

/*METHOD-2:- USING STACK 
    void traversal(TreeNode* root,vector<int> &v)
    {
        stack<TreeNode*>st;
        TreeNode*  curr=root;
        
        while(true)
        {
            if(curr!=NULL)
            {
                st.push(curr);
                curr=curr->left;
            }
            else{
                if(st.empty())break;
                curr=st.top();
                v.push_back(curr->val);
                st.pop();
                curr=curr->right;
            }
        }

    }
*/

//MAIN METHOD
    vector<int> inorderTraversal(TreeNode* root) {   
    vector<int>v;
     if(root==NULL)return v;
    inorder(root,v);
    //traversal(root,v);
    return v;
    }
};