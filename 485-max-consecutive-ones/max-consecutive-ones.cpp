class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int res = 0;
        for (auto x : nums) {
            if (x != 1) {
                res = max(res, cnt);
                cnt = 0;
            } else {
                cnt++;
            }
        }
        res = max(res, cnt);
        return res;
    }
};