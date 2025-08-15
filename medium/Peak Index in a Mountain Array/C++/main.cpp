// Problem: Peak Index in a Mountain Array
// Link to the problem: https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0, end = arr.size() - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }
};