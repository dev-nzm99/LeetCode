/*
 Author:Nazmul Islam
 Created: 2025-11-11 12:23
 Complexity: O(n)
*/
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res = 0, p = 1;
        int l = 0;
        for (int r = 0; r < nums.size(); ++r) {
            p *= nums[r];
            while (l <= r && p >= k) { 
                p /= nums[l];
                ++l;
            }
            res += (r - l + 1);
        }
        return res;
    }
};