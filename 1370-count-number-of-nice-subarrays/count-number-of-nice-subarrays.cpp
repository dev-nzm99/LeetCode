/*
  Author:Nazmul Islam
  Using prefix sum + Hash map
  O(n) time & O(n) space
*/
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int cnt = 0;
        int prefixTracker = 0;
        ++m[0];
        for (int i = 0; i < nums.size(); ++i) {
            prefixTracker += (nums[i] & 1);
            if (m.contains(prefixTracker - k))
                cnt += m[prefixTracker - k];
            ++m[prefixTracker];
        }
        return cnt;
    }
};