/*
  Author: Nazmul Islam
  Complexity: O(n) time & O(1) Space (using fast & slow pointer)
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int f, s;
        s = f = nums[0];
        // Find intersection point
        do {
            s = nums[s];
            f = nums[nums[f]];
        } while (s != f);
        // Find entrance to the cycle (duplicate number)
        s = nums[0];
        while (s != f) {
            s = nums[s];
            f = nums[f];
        }
        return s;
    }
};