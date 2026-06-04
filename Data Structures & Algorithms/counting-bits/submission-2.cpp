class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n + 1);
        int offset = 2;

        for (int i = 0; i <= n; i++)
        {
            if(i == 0) {
                dp[i] = 0;
            }
            else if (i == 1) {
                dp[i] = 1;
            }
            else {
                if (i == 2 * offset)
                {
                    offset = i;
                }
                dp[i] = 1 + dp[i - offset];
            }
        }
        return dp;
    }
};
