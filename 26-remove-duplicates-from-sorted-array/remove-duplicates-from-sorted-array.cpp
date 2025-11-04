/*
  Author:Nazmul Islam
  Complexity: O(n) time, O(1) space
  Using Two Pointers: In-place Array Modification patterns
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 1;
        for (int read = 1; read < nums.size(); ++read) {
            if (nums[read] != nums[read - 1]) {
                nums[write++] = nums[read];
            }
        }
        return write;
    }
};