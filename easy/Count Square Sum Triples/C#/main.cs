// Problem: Count Square Sum Triples
// Link to the problem: https://leetcode.com/problems/count-square-sum-triples/
public class Solution
{
    public int CountTriples(int n)
    {
        int ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            int x = i * i;
            int l = 1;
            int r = i - 1;
            while (l < r)
            {
                int sum = l * l + r * r;
                if (sum == x)
                {
                    ans += 2;
                    l++;
                    r--;
                }
                else if (sum < x)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return ans;
    }
}