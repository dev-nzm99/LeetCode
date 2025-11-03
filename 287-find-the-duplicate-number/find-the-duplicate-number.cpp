/*
  Author: Nazmul Islam
  Complexity: O(n) time & O(1) Space (using fast & slow pointer)
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast, slow;
        fast = slow = nums[0];
        // Find intersection point
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Find entrance to the cycle (duplicate number)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};