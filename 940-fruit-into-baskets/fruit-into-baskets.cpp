/*
 Author:Nazmul Islam
 Created: 2025-11-12 23:22
 Using Sliding Window Pattern (Variable Size)
 Complexity: O(n) time, O(n) space
*/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> m;
        int res = INT_MIN;
        int l = 0;
        for (int r = 0; r < fruits.size(); ++r) {
            m[fruits[r]]++;
            if (m.size() > 2) {
                while (l <= r && m.size() > 2) {
                    m[fruits[l]]--;
                    if (m[fruits[l]] == 0)
                        m.erase(fruits[l]);
                    ++l;
                }
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};