class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; // To handle the case when subarray starts from index 0

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            // Check if there is a subarray ending at i with sum k
            if (prefixSumCount.find(sum - k) != prefixSumCount.end()) {
                count += prefixSumCount[sum - k];
            }

            // Increment the count of the current sum in the map
            prefixSumCount[sum]++;
        }

        return count;
    }
};
