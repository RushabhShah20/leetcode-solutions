// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
class Solution
{
public:
    int minPartitions(string n)
    {
        int ans = 0;
        for (int i = 0; i < n.size(); i++)
        {
            if ((int)n[i] - 48 > ans)
            {
                ans = (int)n[i] - 48;
            }
        }
        return ans;
    }
};