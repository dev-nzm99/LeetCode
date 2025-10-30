/*
  Author: Nazmul Islam
  Created: 2025-10-31 01:20
  Complexity: O(n²)
*/
class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX, res = 0;
        for (int i = 0; i < n - 2; ++i) {
            int l = i + 1, r = n - 1;
            while (l < r) {
                int val = arr[i] + arr[l] + arr[r];
                if (val == target) {
                    return val;
                } else if (val < target) {
                    l++;
                } else {
                    r--;
                }
                int d = abs(val - target);
                if (d < minDiff) {
                    res = val;
                    minDiff = d;
                }
            }
        }
        return res;
    }
};