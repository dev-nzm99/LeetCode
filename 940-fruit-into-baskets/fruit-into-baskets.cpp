/*
 Author:Nazmul Islam
 Created: 2025-11-12 23:22
 Using Sliding Window Pattern (Variable Size)
 Complexity: O(n) time & O(n) space
*/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;
        int res = INT_MIN;
        int l = 0;
        for (int r = 0; r < fruits.size(); ++r) {
            basket[fruits[r]]++;
            while (basket.size() > 2) {
                basket[fruits[l]]--;
                if (basket[fruits[l]] == 0)
                    basket.erase(fruits[l]);
                ++l;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};
