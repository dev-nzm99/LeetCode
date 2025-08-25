class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int total_gas = 0;
        int total_cost = 0;
        for (int i = 0; i < gas.length; i++) {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if (total_gas < total_cost)
            return -1;
        int curr_Gas = 0, st_idx = 0;
        for (int i = 0; i < gas.length; i++) {
            curr_Gas += (gas[i] - cost[i]);
            if (curr_Gas < 0) {
                st_idx = i + 1;
                curr_Gas = 0;
            }
        }
        return st_idx;
    }
}