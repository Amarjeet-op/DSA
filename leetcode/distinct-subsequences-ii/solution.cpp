class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;

        vector<long long> dp(s.length() + 1, 0);
        vector<int> last(26, 0);

        dp[0] = 1; // empty subsequence

        for (int i = 1; i <= s.length(); i++) {
            int c = s[i - 1] - 'a';

            dp[i] = (2 * dp[i - 1]) % MOD;

            dp[i] = (dp[i] - last[c] + MOD) % MOD;

            last[c] = dp[i - 1];
        }

        return (dp[s.length()] - 1 + MOD) % MOD;
    }
};
