class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int cnt = 0;
        int maxVal = INT_MIN;
        for (auto x : nums) {
            if (maxVal <= x) {
                ++cnt;
                maxVal = x;
            }
        }
        return cnt;
    }
};