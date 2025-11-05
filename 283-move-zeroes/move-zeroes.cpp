/*
 Author:Nazmul Islam
 Using Two Pointers (In-Place Array Modification)
 O(n) time O(1) space
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int write = 0;
        for (int read = 0; read < n; ++read) {
            if (nums[read] != 0) {
                nums[write++] = nums[read];
            }
        }
        // fill the rest with 0's
        while (write < n) {
            nums[write++] = 0;
        }
    }
};

/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                swap(nums[i],nums[j++]);
            }i++;
        }
    }
};
*/
