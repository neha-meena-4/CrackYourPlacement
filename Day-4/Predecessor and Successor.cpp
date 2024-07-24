class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        
        if(root==NULL)return;
        if(root->key==key)
        {
            //If its left subtree is not null Then predecessor will be the right most child of left subtree or left child itself
           if(root->left!=NULL)
           {
               Node* temp=root->left;
               while(temp->right)
               {
                   temp=temp->right;
               }
                   pre=temp;
               
           }
           //If its right subtree is not null The successor will be the left most child of right subtree or right child itself.
           if(root->right!=NULL)
           {
               Node* temp=root->right;
               while(temp->left)
               {
                   temp=temp->left;
               }
                   suc=temp;
               
           }
           return;
        }
        if(root->key<key)//predecessor is in right subtree of current root
        {
            pre=root;
            findPreSuc(root->right, pre, suc,key);
        }
        else // successor is in left subtree of current root
        {
            suc=root;
            findPreSuc(root->left, pre, suc,key);
        }
       
    }
};