class Solution {
public:
    vector<int>
    productExceptSelf(vector<int>& nums) { // Time: O(n)   Space: O(1)
        int n = nums.size();
        vector<int> ans(n, 1);
        int prefix, suffix;
        prefix = suffix = 1;
        for (int i = 1; i < n; i++) {
            prefix *= nums[i - 1];
            ans[i] *= prefix;
        }
        for (int j = n - 2; j >= 0; j--) {
            suffix *= nums[j + 1];
            ans[j] *= suffix;
        }
        return ans;
    }
};