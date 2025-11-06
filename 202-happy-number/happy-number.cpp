/*
 Author:Nazmul Islam
 Created: 2025-11-03 13:50
 Using Two Pointers pattern (Fast & Slow)
 Complexity: O(n) 
*/
class Solution {
public:
    bool isHappy(int n) {
        int fast, slow;
        fast = slow = n;
        do {
            slow = find(slow);
            fast = find(find(fast));
        } while (slow != fast);

        return slow == 1;
    }

private:
    int find(int val) {
        int res = 0;
        while (val > 0) {
            int k = val % 10;
            res += (k * k);
            val /= 10;
        }
        return res;
    }
};
