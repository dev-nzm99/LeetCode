/*
Author: Nazmul Islam
*/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> mp;
        stack<int> stk;
        for (auto& x : nums2)
            mp[x] = -1;

        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && stk.top() <= nums2[i]) {
                stk.pop();
            }
            if (!stk.empty())
                mp[nums2[i]] = stk.top();
            stk.push(nums2[i]);
        }

        for (int i = 0; i < nums1.size(); ++i) {
            int val = mp[nums1[i]];
            nums1[i] = val;
        }
        return nums1;
    }
};