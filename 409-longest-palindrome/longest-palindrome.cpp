class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        for (auto x : s) m[x]++;
        int cnt = 0;
        bool oddFound = false;
        for (auto x : m) {
            if (x.second & 1) {
                cnt += x.second - 1;
                oddFound = true;
            } else
                cnt += x.second;
        }
        if (oddFound) cnt++;
        return cnt;
    }
};