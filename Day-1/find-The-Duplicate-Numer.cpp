class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Method-1 using set
        unordered_set<int>s;
        s.insert(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                return nums[i];
            }
            s.insert(nums[i]);

        }
        return -1;
        
        //Method-2 using vector
        vector<bool> arr(nums.size(),false);
        int i=0;
        for(i=0;i<nums.size();i++)
            if(arr[nums[i]]==false)
                arr[nums[i]]=true;
            else
                break; // when we find the Duplicate element
        return nums[i]; 
        
    }
};