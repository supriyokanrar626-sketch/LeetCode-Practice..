class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        unordered_map<int, int> dp;
        ranges::sort(nums);
        int res = 0;
        for (const int& num : nums) {
            res = max(res, dp[num + 1] = dp[num] + 1);
            res = max(res, dp[num] = dp[num - 1] + 1);
        }
        return res;
    }
};