/*
  Author: Nazmul Islam
  Created: 2025-10-28 19:18
  Complexity: O(n²)
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1, r = n - 1;
            int fixed_val = nums[i];
            while (l < r) {
                int val = fixed_val + nums[l] + nums[r];
                if (val == 0) {
                    res.push_back({fixed_val, nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1])l++;
                    while (l < r && nums[r] == nums[r - 1])r--;
                    l++; r--;
                } else if (val < 0) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return res;
    }
};