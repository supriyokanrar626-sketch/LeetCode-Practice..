class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size(), m = arr2.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            bool ok = true;
            for (int j = 0; j < m; j++) {
                int x = abs(arr1[i] - arr2[j]);
                if (x <= d) {
                    ok = false;
                    break;
                }
            }
            if (ok == true) {
                ans++;
            }
        }
        return ans;
    }
};