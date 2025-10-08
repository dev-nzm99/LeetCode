class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> discount(prices);
        stack<int> stk;
        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && stk.top() > prices[i]) {
                stk.pop();
            }
            if (!stk.empty())
                discount[i] -= stk.top();
            stk.push(prices[i]);
        }
        return discount;
    }
};