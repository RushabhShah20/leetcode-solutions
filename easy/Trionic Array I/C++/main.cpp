// Problem: Trionic Array I
// Link to the problem: https://leetcode.com/problems/trionic-array-i/
class Solution
{
public:
    bool isTrionic(vector<int> &nums)
    {
        for (int i = 1; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                bool x = true;
                vector<int> a(nums.begin(), nums.begin() + i + 1), b(nums.begin() + i, nums.begin() + j + 1), c(nums.begin() + j, nums.end());
                for (int k = 0; k < a.size() - 1; k++)
                {
                    if (a[k] >= a[k + 1])
                    {
                        x = false;
                    }
                }
                for (int k = 0; k < b.size() - 1; k++)
                {
                    if (b[k] <= b[k + 1])
                    {
                        x = false;
                    }
                }
                for (int k = 0; k < c.size() - 1; k++)
                {
                    if (c[k] >= c[k + 1])
                    {
                        x = false;
                    }
                }
                if (x == true)
                {
                    return true;
                }
            }
        }
        return false;
    }
};