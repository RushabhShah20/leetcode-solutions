// Problem: Element Appearing More Than 25% In Sorted Array
// Link to the problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        const int n = arr.size(), m = n / 4;
        for (int i = 0; i < n - m; i++)
        {
            if (arr[i] == arr[i + m])
            {
                return arr[i];
            }
        }
        return -1;
    }
};