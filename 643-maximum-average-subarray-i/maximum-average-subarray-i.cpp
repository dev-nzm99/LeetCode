/*
  Author:Nazmul Islam
  Created: 2025-11-05 14:34
  Using Sliding Window Pattern(Fixed Size)
  Complexity: O(n)
*/
class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k)   //handle edge case (not enough elements)
            return 0.0;

        double windowSum = 0;
        for (int i = 0; i < k; ++i) {
            windowSum += arr[i];
        }

        double maxSum = windowSum;
        for (int j = k; j < n; ++j) {
            windowSum = windowSum - arr[j - k] + arr[j];
            maxSum = max(maxSum, windowSum);
        }
        return maxSum / k;
    }
};