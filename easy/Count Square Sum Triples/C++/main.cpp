// Problem: Count Square Sum Triples
// Link to the problem: https://leetcode.com/problems/count-square-sum-triples/
class Solution
{
public:
    int countTriples(int n)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                for (int k = i; k <= n; k++)
                {
                    if (i * i + j * j == k * k)
                    {
                        count = count + 2;
                    }
                }
            }
        }
        return count;
    }
};