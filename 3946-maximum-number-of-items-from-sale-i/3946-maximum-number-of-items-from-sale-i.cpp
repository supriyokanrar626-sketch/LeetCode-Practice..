#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        int max_factor = 0;
        int min_price = budget + 1;

        for (const auto& item : items) {
            max_factor = max(max_factor, item[0]);
            min_price = min(min_price, item[1]);
        }

        // Count frequency of each factor
        vector<int> freq(max_factor + 1, 0);
        for (const auto& item : items) {
            freq[item[0]]++;
        }

        // For each factor f, count how many items have a factor divisible by f
        vector<int> divisible_count(max_factor + 1, 0);
        for (int f = 1; f <= max_factor; ++f) {
            if (freq[f] == 0) continue;
            for (int multiple = f; multiple <= max_factor; multiple += f) {
                divisible_count[f] += freq[multiple];
            }
        }

        // 0-1 Knapsack: dp[c] = max copies from buying at most 1 copy of each item type at exact cost c
        vector<int> dp(budget + 1, -1);
        dp[0] = 0;

        for (const auto& item : items) {
            int factor = item[0];
            int price = item[1];
            if (price > budget) continue;

            // 1 purchased copy + (divisible_count[factor] - 1) free copies
            int total_gain = divisible_count[factor];

            for (int c = budget; c >= price; --c) {
                if (dp[c - price] != -1) {
                    dp[c] = max(dp[c], dp[c - price] + total_gain);
                }
            }
        }

        // Spend any leftover budget on the single cheapest item
        int ans = 0;
        for (int c = 0; c <= budget; ++c) {
            if (dp[c] != -1) {
                int extra_copies = (min_price <= budget) ? (budget - c) / min_price : 0;
                ans = max(ans, dp[c] + extra_copies);
            }
        }

        return ans;
    }
};