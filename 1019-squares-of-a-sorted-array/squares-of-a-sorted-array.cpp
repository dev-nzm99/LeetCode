/*
  Author:Nazmul Islam
  Complexity: O(n)
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        for (int i = 0; i < n; ++i)
            nums[i] *= nums[i];
        int l = 0, r = n - 1;
        for (int pos = n - 1; pos >= 0; --pos) {
            res[pos] = (nums[l] >= nums[r]) ? nums[l++] : nums[r--];
        }
        return res;
    }
};