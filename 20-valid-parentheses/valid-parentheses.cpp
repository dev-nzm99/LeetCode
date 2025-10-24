/*
Author: Nazmul Islam
Created: 2025-10-24 21:31
Complexity: O(n) time & O(n) space
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (auto c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (stk.empty()) return false;
                char top = stk.top();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                } else {
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};