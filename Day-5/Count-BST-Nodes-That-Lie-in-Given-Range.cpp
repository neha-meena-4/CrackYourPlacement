int count=0;
    void helper(Node *root, int l, int h)
    {
          if(root==NULL)return ;
          if(root->key>l && root->key<h)
          {
              count++;
          }
          getCount(root->left,l,h);
          getCount(root->right,l,h)
    }
    int getCount(Node *root, int l, int h)
    {
      // your code goes here  
      helper(root,l,h);
      return count;
     
    }
    