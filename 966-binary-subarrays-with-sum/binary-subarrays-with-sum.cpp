/*
  Author:Nazmul Islam
  Created: 2025-11-22 21:30
  Using prefix sum + Hash map
  O(n) time & O(n) space
*/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> m;
        int res = 0;
        int prefixTracker = 0;
        m[0]++;
        for (int i = 0; i < nums.size(); ++i) {
            prefixTracker += nums[i];
            if (m.find(prefixTracker - goal) != m.end())
                res += m[prefixTracker - goal];
            m[prefixTracker]++;
        }
        return res;
    }
};