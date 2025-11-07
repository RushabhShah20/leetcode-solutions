// Problem: Maximize the Minimum Powered City
// Link to the problem: https://leetcode.com/problems/maximize-the-minimum-powered-city/
class Solution
{
public:
    bool check(vector<int> stations, long long r, long long k, long long minPower)
    {
        long long n = stations.size();
        long long power = 0;
        for (int i = 0; i < r; i++)
        {
            power += stations[i];
        }
        for (long long i = 0; i < n; i++)
        {
            if (i + r < n)
            {
                power += stations[i + r];
            }
            if (power < minPower)
            {
                long long required = minPower - power;
                if (required > k)
                {
                    return false;
                }
                stations[min((long long)(n - 1), (long long)(i + r))] += required;
                k -= required;
                power += required;
            }
            if (i - r >= 0)
            {
                power -= stations[i - r];
            }
        }
        return true;
    }
    long long maxPower(vector<int> &stations, int r, int k)
    {
        long long l = *min_element(stations.begin(), stations.end()), h = accumulate(stations.begin(), stations.end(), (long long)(0)) + k + 1;
        while (l < h)
        {
            long long m = l + (h - l) / 2;
            if (check(stations, r, k, m))
            {
                l = m + 1;
            }
            else
            {
                h = m;
            }
        }
        return l - 1;
    }
};