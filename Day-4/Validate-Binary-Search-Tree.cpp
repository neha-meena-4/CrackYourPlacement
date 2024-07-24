
class Solution {
public:
   
//METHOD-1:-
    bool valid(TreeNode* root,long long  minval,long long  maxval)
    {
        if(root==NULL)return true;
        if(root->val>=maxval||root->val<=minval) return false;
            
            return(valid(root->left,minval,root->val)&&valid(root->right,root->val,maxval));
        
    }
    
/*
 METHOD-2
     long long  prev=( long long)INT_MIN-1;
     bool isvalid(TreeNode *root)
    {
        if(root==NULL)return true;
        if(isvalid(root->left)==false)return false;
       
            if(prev>=root->val)
            {
               return false;
            }

        prev=root->val;
        return (isvalid(root->right));
    }
*/
     
    bool isValidBST(TreeNode* root) {
        return valid(root,(long long)INT_MIN-1,(long long)INT_MAX+1);
        //return isvalid(root);
    }
    
};