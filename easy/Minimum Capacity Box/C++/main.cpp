// Problem: Minimum Capacity Box
// Link to the problem: https://leetcode.com/problems/minimum-capacity-box/
class Solution
{
public:
    int minimumIndex(vector<int> &capacity, int itemSize)
    {
        const int n = capacity.size();
        int x = 101;
        for (int i = 0; i < n; i++)
        {
            if (capacity[i] >= itemSize)
            {
                {
                    x = min(x, capacity[i]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (capacity[i] == x)
            {
                return i;
            }
        }
        return -1;
    }
};