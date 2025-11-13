/*
 Author:Nazmul Islam
 Complexity: O(n)
*/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res = 0;
        int zeroCnt = 0, l = 0;
        for (int r = 0; r < nums.size(); ++r) {
            zeroCnt += (nums[r] == 0);
            while (l <= r && zeroCnt > 1) {
                zeroCnt -= (nums[l] == 0);
                ++l;
            }
            res = max(res, r - l);
        }
        return res;
    }
};
