// Problem: Minimum Number of Seconds to Make Mountain Height Zero
// Link to the problem: https://leetcode.com/problems/minimum-number-of-seconds-to-make-mountain-height-zero/
class Solution
{
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int> &workerTimes)
    {
        long long mx = *max_element(workerTimes.begin(), workerTimes.end()), l = 1, r = mx * mountainHeight * (mountainHeight + 1) / 2, ans = r;
        while (l <= r)
        {
            const long long m = l + (r - l) / 2;
            long long x = 0;
            for (const int workerTime : workerTimes)
            {
                const long long w = m / workerTime, k = (-1 + sqrtl(1 + 8.0 * w)) / 2 + 1e-7;
                x += k;
            }
            if (x >= mountainHeight)
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
};