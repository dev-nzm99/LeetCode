/*
 Author:Nazmul Islam
 Created: 2025-11-06 22:45
 Using Sliding Window pattern
 Complexity: O(n) 
*/
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, cnt = 1;
        vector<int> res;
        for (int r = 0; r < n; ++r) {
            if (r > 0 && nums[r - 1] + 1 == nums[r])
                cnt++;

            if (r - l + 1 > k) {
                if (nums[l] + 1 == nums[l + 1])
                    cnt--;
                l++;
            }

            if (r - l + 1 == k)
                res.push_back((cnt==k)?nums[r]:-1);
        }
        return res;
    }
};