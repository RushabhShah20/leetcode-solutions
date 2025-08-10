// Problem: Number of Ways to Buy Pens and Pencils
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-buy-pens-and-pencils/
class Solution
{
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2)
    {
        long long ans = 0;
        long long pens = total / cost1;
        for (long long i = 0; i <= pens; i++)
        {
            ans += (1 + ((total - (i * cost1)) / cost2));
        }
        return ans;
    }
};