class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int sum = 0;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            arr.push_back({sum, nums[i], i});
        }
        //   Hint 1
        // First, sort the array based on digit sum (and value as a tiebreaker).
        // Then, map    each original value to its index in the sorted array.

        sort(arr.begin(), arr.end());

        vector<bool> vis(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] || arr[i][2] == i)
                continue;

            int j = i, len = 0;

            while (!vis[j]) {
                vis[j] = true;
                j = arr[j][2];
                len++;
            }

            swaps += len - 1;
        }

        return swaps;
    }
};