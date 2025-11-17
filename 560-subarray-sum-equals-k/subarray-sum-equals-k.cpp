/*
 Author:Nazmul Islam
 Using prifix sum and Hashing
 Complexity:O(n) time & O(n) space
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0 && n == 1)
            return 0;
        unordered_map<int, int> m;
        int sum = 0, count = 0;
        m[0]++;
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            if (m.contains(sum - k))
                count += m[sum - k];
            m[sum]++;
        }
        return count;
    }
};