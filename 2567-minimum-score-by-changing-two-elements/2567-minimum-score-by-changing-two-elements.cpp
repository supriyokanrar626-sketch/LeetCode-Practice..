class Solution {
public:
    int get_sum(vector<int> &arr)
    {
        int n = arr.size();

        int mx = 0, mn = INT_MAX;


        for(int i = 0; i < n - 1; i++)
            mn = min(mn, abs(arr[i] - arr[i+1]));

        mx = arr[n-1] - arr[0];

        return mn + mx;

    }
    int minimizeSum(vector<int>& nums) 
    {
        int n = nums.size();

        sort(nums.begin(), nums.end());


        vector<int> arr = nums;

        arr[0] = arr[2];
        arr[1] = arr[2];


        int ans = get_sum(arr);

        arr = nums;

        arr[n-1] = arr[n-3];

        arr[n-2] = arr[n-3];



        ans = min(ans, get_sum(arr));

        arr = nums;

        arr[0] = arr[1];
        arr[n-1] = arr[n-2];

        ans = min(ans, get_sum(arr));

        return ans;
        
    }
};