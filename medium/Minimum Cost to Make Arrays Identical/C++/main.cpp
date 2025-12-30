// Problem: Minimum Cost to Make Arrays Identical
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-make-arrays-identical/
class Solution
{
public:
    long long minCost(vector<int> &arr, vector<int> &brr, long long k)
    {
        const int n = arr.size();
        long long ans1 = 0, ans2 = k;
        for (int i = 0; i < n; i++)
        {
            ans1 += abs(arr[i] - brr[i]);
        }
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        for (int i = 0; i < n; i++)
        {
            ans2 += abs(arr[i] - brr[i]);
        }
        const long long ans = min(ans1, ans2);
        return ans;
    }
};