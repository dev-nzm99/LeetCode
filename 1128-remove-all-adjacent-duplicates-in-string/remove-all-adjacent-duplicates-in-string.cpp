/*
 Author: Nazmul Islam
 Created: 2025-10-24 21:55
 Complexity: O(n) time and O(n) space
*/
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        for (auto c : s) {
            (!stk.empty() && c == stk.top()) ? stk.pop() : stk.push(c);
        }
        string res = "";
        while (!stk.empty()) {
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};