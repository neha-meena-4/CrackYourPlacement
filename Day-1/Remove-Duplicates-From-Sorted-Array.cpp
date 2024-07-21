class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=0;
        for(int second=1;second<nums.size();second++)
        {
            if(nums[second]!=nums[first])
            {
              swap(nums[first+1],nums[second]);//whenever you find unique element
               first++;
            }
        }
        return first+1;

    }
  
};