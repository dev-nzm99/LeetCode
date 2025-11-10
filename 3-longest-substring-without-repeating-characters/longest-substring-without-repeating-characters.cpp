/*
 Author:Nazmul Islam
 Created: 2025-11-10 23:52
 Using sliding window pattern (variable Size)
 Complexity: O(n) time & O(n) space
*/
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n = str.length();
        if (n == 0)
            return 0;
        int maxCnt = INT_MIN;
        int left = 0;
        unordered_set<char> s;
        for (int right = 0; right < n; ++right) {
            while (s.contains(str[right])) {
                s.erase(str[left]);
                ++left;
            }
            s.insert(str[right]);
            maxCnt = max(maxCnt, right - left + 1);
        }
        return maxCnt;
    }
};
