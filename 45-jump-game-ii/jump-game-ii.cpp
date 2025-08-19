class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;
        int destination = nums.size() - 1;
        int coverage, lastJumpIdx;
        int totalJmp = 0;
        coverage = lastJumpIdx = 0;
        // extend coverage as long as possible (Greedy strategy)
        for (int i = 0; i < nums.size(); i++) {
            coverage = max(coverage, i + nums[i]);
            if (i == lastJumpIdx) {
                lastJumpIdx = coverage;
                totalJmp++;
                // check if we reached destination already
                if (coverage >= destination)
                    return totalJmp;
            }
        }
        return totalJmp;
    }
};