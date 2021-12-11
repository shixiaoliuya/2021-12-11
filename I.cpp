#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int _; cin >> _;
    while (_--) {
        string s; cin >> s;
        vector<int> dp(8);
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'a') {
                dp[2] = (dp[2] + dp[1]) % MOD;
                dp[0] = (dp[0] + 1) % MOD;
            }
            else if (s[i] == 'b') {
                dp[1] = (dp[1] + dp[0]) % MOD;
            }
            else if (s[i] == 'd') {
                dp[6] = (dp[6] + dp[5]) % MOD;
                dp[5] = (dp[5] + dp[4]) % MOD;
                dp[3] = (dp[3] + dp[2]) % MOD;
            }
            else if (s[i] == 'e') {
                dp[7] = (dp[7] + dp[6]) % MOD;
                dp[4] = (dp[4] + dp[3]) % MOD;
            }
        }
        cout << dp[7] << endl;
    }
    return 0;
}
