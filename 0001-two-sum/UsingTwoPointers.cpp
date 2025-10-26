/*
 Author: Nazmul Islam
 Created: 2025-10-26 15:59
 Using Converging Two Pointers technique
 Code Complexity: O(nlogn) time and O(1) space
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i)
            a[i] = {i, nums[i]};

        // Sort by value (second) using lambda function
        sort(a.begin(), a.end(),
             [](const pair<int, int>& x, const pair<int, int>& y) {
                 return x.second < y.second;
             });
        int l = 0, r = n - 1;
        while (l < r) {
            int sum = a[l].second + a[r].second;
            if (sum == target)
                break;
            else if (sum < target)
                l++;
            else
                r--;
        }
        return {a[l].first, a[r].first};
    }
};
