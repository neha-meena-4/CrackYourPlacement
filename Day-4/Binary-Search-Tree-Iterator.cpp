
class BSTIterator {
public:
vector<TreeNode*>Nodes;

int start =0;// to access vectors element
void inorder(TreeNode*root,vector<TreeNode*>& Nodes ){
   
    if(root == NULL) return ;
    inorder(root->left , Nodes);
    Nodes.push_back(root);
    inorder(root->right,Nodes);
}

    BSTIterator(TreeNode* root) {
        //storing nodes in vector using inorder traversal
        inorder(root,Nodes);
    }
    
    int next() {
        //return elements in inorder traversal sequence
        int x = Nodes[start]->val;
        start++;
        return x; 
    }
    
    bool hasNext() {
       
        //if there is still unvisited elements in vector return true
        if(start < Nodes.size()) return true;
        return false;
        
    }
};

