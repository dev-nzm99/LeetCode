/*
  Author:Nazmul Islam
  Created: 2025-11-11 23:16
  Using Sliding Window Pattern (variable Size)
  Complexity: O(n) time & O(1) space
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int sum = 0;
        int minCnt = INT_MAX;
        int l = 0;
        for (int r = 0; r < arr.size(); ++r) {
            sum += arr[r];
            if (sum >= target) {
                while (sum - arr[l] >= target)
                    sum -= arr[l++];
                minCnt = min(minCnt, r - l + 1);
            }
        }
        return (minCnt == INT_MAX) ? 0 : minCnt;
    }
};