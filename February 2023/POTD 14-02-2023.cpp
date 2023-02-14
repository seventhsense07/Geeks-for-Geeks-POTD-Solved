class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        vector<vector<int>> dp(N+5, vector<int>(3));
        for(int i=1; i<=N; i++) {
            dp[i] = colors[i-1];
            dp[i][0] += min(dp[i-1][1], dp[i-1][2]);
            dp[i][1] += min(dp[i-1][0], dp[i-1][2]);
            dp[i][2] += min(dp[i-1][0], dp[i-1][1]);
        }
        return min({dp[N][0], dp[N][1], dp[N][2]});
    }
};
