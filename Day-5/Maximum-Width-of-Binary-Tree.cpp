/*
For each level, 
we calculate the width by subtracting the index of the first node from the index of the last node and adding one.
The index for the left child is 2 * idx, and for the right child is 2 * idx + 1.
*/
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        
        int maxWidth = 0;
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});
        
        while (!q.empty()) {
            int count = q.size();
            unsigned long long start = q.front().second;
            unsigned long long end = q.back().second;
            maxWidth = max(maxWidth, static_cast<int>(end - start + 1));
            
            for (int i = 0; i < count; ++i) {
                pair<TreeNode*, unsigned long long> curr = q.front();
                q.pop();
                
                unsigned long long idx = curr.second;
                if (curr.first->left) q.push({curr.first->left, 2 * idx});
                if (curr.first->right) q.push({curr.first->right, 2 * idx + 1});
            }
        }
        
        return maxWidth;
       
    }
};
