/*
  Author:Nazmul Islam
  Complexity: O(n) time & O(n) space
*/
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), res = 0;
        vector<long long> prefArr(n, 0), suffArr(n, 0);

        prefArr[0] = nums[0];
        suffArr[n - 1] = nums[n - 1];
        for (int i = 1; i < n; ++i)
            prefArr[i] = prefArr[i - 1] + (long long)nums[i];
        for (int i = n - 2; i >= 0; --i)
            suffArr[i] = suffArr[i + 1] + (long long)nums[i];
        for (int i = 1; i < n; ++i)
            res += (prefArr[i - 1] >= suffArr[i]);
        return res;
    }
};
/*
//Complexity: O(n) time & O(1) space 

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), res = 0;
        long long totalSum = 0;
        for (const auto& x : nums)
            totalSum += x;

        long long currSum = 0;
        for (int i = 0; i < n - 1; ++i) {
            currSum += nums[i];
            if (currSum >= (totalSum - currSum)) // Is leftSum >= rightSum ?
                res++;
        }
        return res;
    }
};
*/
