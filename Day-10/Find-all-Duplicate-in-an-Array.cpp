class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        /* METHOD-1:- USING MAP

        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                v.push_back(nums[i]);
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        */

        //METHOD-2:- BY SORTING ARRAY 
        sort(nums.begin(),nums.end());
        for( int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};

