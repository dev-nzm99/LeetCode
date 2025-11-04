/*
  Author:Nazmul Islam
  Complexity: O(n) time, O(1) space
  Using Two Pointers: In-place Array Modification patterns
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int write = 0;
        for(int read = 0;read<nums.size();++read){
            if(nums[read] != val){
                nums[write++] = nums[read];
            }
        }
        return write;
    }
};