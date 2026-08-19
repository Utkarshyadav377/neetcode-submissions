class Solution {
private:
    int solver(int idx, int count, vector<int> &prices, vector<vector<int>> &dp) {
        if(idx == prices.size()) {
            return 0;
        }
        if(dp[idx][count] != -1) return dp[idx][count];
        int res = solver(idx + 1, count, prices, dp);
        if(count == 0) {
            res = max(solver(idx + 1, 1, prices, dp) - prices[idx], solver(idx + 1, 0, prices, dp));
        }
        if(count == 1) {
            res = max(prices[idx] + solver(idx + 1, 0, prices, dp), solver(idx + 1, 1, prices, dp));
        }
        return dp[idx][count] = res;
    }
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(), vector<int>(2, -1));
        return solver(0, 0, prices, dp);
    }
};