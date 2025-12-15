// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
class Solution
{
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        if (arr[0] != 1)
        {
            arr[0] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                arr[i] = arr[i - 1] + 1;
            }
        }
        const int ans = arr[n - 1];
        return ans;
    }
};