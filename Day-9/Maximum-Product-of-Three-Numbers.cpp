class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Maximum product can be from the three largest numbers
        // or from the two smallest and the largest number (in case of negative numbers)
        int option1 = nums[n-1] * nums[n-2] * nums[n-3];
        int option2 = nums[0] * nums[1] * nums[n-1];
        
        return max(option1, option2);
    }
};
