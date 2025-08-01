// Problem: Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
// Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        int ans = 0, n = arr.size();
        unsigned long long sum = 0, x = threshold * k;
        for (int i = 0; i < n; i++)
        {
            if (i >= k)
            {
                sum += arr[i];
                sum -= arr[i - k];
            }
            else
            {
                sum += arr[i];
            }
            if ((sum >= x) && (i >= (k - 1)))
            {
                ans++;
            }
        }
        return ans;
    }
};