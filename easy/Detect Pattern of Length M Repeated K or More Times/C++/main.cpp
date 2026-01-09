// Problem: Detect Pattern of Length M Repeated K or More Times
// Link to the problem: https://leetcode.com/problems/detect-pattern-of-length-m-repeated-k-or-more-times/
class Solution
{
public:
    bool containsPattern(vector<int> &arr, int m, int k)
    {
        const int n = arr.size();
        int count = 0;
        for (int i = 0; i < n - m; i++)
        {
            if (arr[i] == arr[i + m])
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count == (k - 1) * m)
            {
                return true;
            }
        }
        return false;
    }
};