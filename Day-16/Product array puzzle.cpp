vector<long long int> productExceptSelf(vector<long long int>& nums) {
    int n = nums.size();
    vector<long long int> ans(n, 1);
    long long int leftProduct = 1;
    long long int rightProduct = 1;

    // Calculate left products
    for (int i = 0; i < n; ++i) {
        ans[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Calculate right products and multiply with left products
    for (int i = n - 1; i >= 0; --i) {
        ans[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return ans;
}
