// Problem: Maximum Count of Positive Integer and Negative Integer
// Link to the problem: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
int maximumCount(int *nums, int numsSize)
{
    int n = numsSize, start = 0, end = n - 1, maxNeg = -1, minPos = n;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] > 0)
        {
            minPos = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < 0)
        {
            maxNeg = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    maxNeg += 1;
    minPos = n - minPos;
    const int ans = fmax(maxNeg, minPos);
    return ans;
}