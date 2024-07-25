
class Solution {
public:

TreeNode* prev=NULL;


    void flatten(TreeNode* root) 
    {
        if(root==NULL)return;
    /*  METHOD 1:- using stack
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* curr=st.top();
            st.pop();
            if(curr->right)
                st.push(curr->right);
            if(curr->left)
                st.push(curr->left);
            if(!st.empty())
            curr->right=st.top();
            curr->left=NULL;
        } 
    */     

    //METHOD-2     
        if(root==NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=NULL;
        prev=root;  
    }
};