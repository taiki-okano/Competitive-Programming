#include <iostream>

constexpr int MAX_N = 100000;

int main(){
    int n;
    int cost[MAX_N], dp[MAX_N];

    std::cin >> n;

    for(int i = 0; i < n; ++i)
        std::cin >> cost[i];

    dp[0] = 0, dp[1] = abs(cost[1] - cost[0]);
    for(int i = 2; i < n; ++i)
        dp[i] = std::min(dp[i - 1] + abs(cost[i] - cost[i - 1]), dp[i - 2] + abs(cost[i] - cost[i - 2]));

    std::cout << dp[n - 1] << std::endl;

    return 0;
}
