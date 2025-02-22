#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int &v : coins)
        cin >> v;

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, INT_MAX));

    // Base case: 0 amount requires 0 coins
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int amt = 1; amt <= x; amt++) {
            int npick = dp[i - 1][amt]; 

            int pick = INT_MAX;
            if (amt >= coins[i - 1] && dp[i][amt - coins[i - 1]] != INT_MAX) {
                pick = 1 + dp[i][amt - coins[i - 1]];
            }

            dp[i][amt] = min(pick, npick);
        }
    }

    cout << (dp[n][x] == INT_MAX ? -1 : dp[n][x]) << endl;
    return 0;
}
