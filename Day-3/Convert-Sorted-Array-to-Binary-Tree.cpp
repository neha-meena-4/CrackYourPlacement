
class Solution {
public:

    TreeNode* helper(vector<int>nums,int low,int high)
    {
        if(low>high) return NULL ;
        if(low==high)  return new TreeNode(nums[low]);
        
          int mid=(low+high)/2;
        
          TreeNode* node=new TreeNode(nums[mid]);
           node->left=helper(nums,low,mid-1);
           node->right=helper(nums,mid+1,high);
          return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) { 
       
        if(nums.size()==0)return NULL;
     return  helper(nums,0,nums.size()-1);  
   
    }

    

};

