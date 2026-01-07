// Problem: Maximum Gap
// Link to the problem: https://leetcode.com/problems/maximum-gap/
class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        const int n = nums.size();
        if (n < 2)
        {
            return 0;
        }
        int ans = 0, maxVal = nums[0], minVal = nums[0];
        for (const int &num : nums)
        {
            maxVal = max(maxVal, num);
            minVal = min(minVal, num);
        }
        int b = (maxVal - minVal) / (n - 1);
        if (b == 0)
        {
            b++;
        }
        const int m = ((maxVal - minVal) / (b)) + 1;
        vector<int> minBucket(m, INT_MAX), maxBucket(m, 0);
        for (int i = 0; i < n; i++)
        {
            int j = (nums[i] - minVal) / b;
            minBucket[j] = min(minBucket[j], nums[i]);
            maxBucket[j] = max(maxBucket[j], nums[i]);
        }
        int prevMax = maxBucket[0];
        for (int i = 1; i < m; i++)
        {
            if (minBucket[i] == INT_MAX)
            {
                continue;
            }
            ans = max(ans, minBucket[i] - prevMax);
            prevMax = maxBucket[i];
        }
        return ans;
    }
};