// Problem: Minimum Cost to Make Two Binary Strings Equal
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-make-two-binary-strings-equal/
class Solution
{
public:
    long long minimumCost(string s, string t, int flipCost, int swapCost, int crossCost)
    {
        const int n = s.size();
        long long a = 0, b = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && t[i] == '1')
            {
                a++;
            }
            else if (s[i] == '1' && t[i] == '0')
            {
                b++;
            }
        }
        long long c1 = min(2 * flipCost, swapCost), c2 = min(2 * flipCost, swapCost + crossCost);
        long long p = min(a, b), r = abs(a - b);
        ans += (p * c1);
        a -= p;
        b -= p;
        ans += ((r / 2) * c2);
        if (r % 2 != 0)
        {
            ans += flipCost;
        }
        return ans;
    }
};