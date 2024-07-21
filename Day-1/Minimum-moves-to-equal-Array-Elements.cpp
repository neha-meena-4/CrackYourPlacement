class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int mid = nums[nums.size()/2];
        int ans = 0;
        for(auto val:nums)
            ans += abs(mid - val); //making moves according to mid element will give us minimum no of req moves
        return ans;
    }
};