/*
  Author:Nazmul Islam
  Created: 2025-11-15 19:39
  Complexity: O(n) time & O(1) space
*/
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int res = INT_MIN;
        int maxFreq = INT_MIN;
        int l = 0;
        for (int r = 0; r < s.length(); ++r) {
            freq[s[r] - 'A']++;
            maxFreq = max(maxFreq, freq[s[r] - 'A']);
            while ((r - l + 1) - maxFreq > k) {
                freq[s[l++] - 'A']--;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};