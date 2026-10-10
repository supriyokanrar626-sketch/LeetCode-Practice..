class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {

        vector<int> d(100001, 0);
        long long sum = 0;
        int mx = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int x = abs(nums1[i] - nums2[i]);

            d[x]++;
            sum += x;
            mx = max(mx, x);
        }

        long long k = (long long)k1 + k2;

        while (k > 0 && mx > 0) {
            if (d[mx] == 0) {
                mx--;
                continue;
            }

            int cnt = min((long long)d[mx], k);

            d[mx] -= cnt;
            d[mx - 1] += cnt;

            k -= cnt;
            mx--;
        }

        long long ans = 0;

        for (int i = 1; i < 100001; i++) {
            ans += 1LL * i * i * d[i];
        }

        return ans;
    }
};