/*
 Author:Nazmul Islam
 Complexity:O(n) time & O(n) Space
*/
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        long long currSum = 0;
        for (int i = 0; i < k; ++i) {
            m[nums[i]]++;
            currSum += nums[i];
        }
        long long maxSum = 0;
        if (m.size() == k) {
            maxSum = currSum;
        }
        for (int i = k; i < nums.size(); ++i) {
            m[nums[i]]++;
            currSum = currSum - nums[i - k] + nums[i];
            if (--m[nums[i - k]] == 0)
                m.erase(nums[i - k]);
            if (m.size() == k)
                maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};