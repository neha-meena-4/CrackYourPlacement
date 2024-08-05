class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            {
            int left=i+1,right=nums.size()-1;
            while(left<right)
            {
                if(nums[left]+nums[right] +nums[i]==0)
                {
                    v.push_back({nums[i],nums[left],nums[right]});
                   while(left<right && nums[left]==nums[left+1])
                       left++;
                    while(left<right && nums[right]==nums[right-1])
                        right--;
                    
                    left++;
                    right--;
                 
                }
                else if(nums[left]+nums[right] +nums[i]<0)
                left +=1;
                else
                    right -=1;
            }
        }
        }
        return v;

    }
};