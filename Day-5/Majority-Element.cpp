class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int index=0,count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[index]==nums[i])
                count++;
            else
                count--;
            if(count==0)
            {
                index=i;
                count=1;
            } 
        }
        count=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[index]==nums[i])
        //         count++;
        // }
        
        // if(count>nums.size()/2)
        //     return nums[index];
        return nums[index];

       
   
    }
};