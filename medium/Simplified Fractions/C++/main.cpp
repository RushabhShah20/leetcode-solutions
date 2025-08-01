// Problem: Simplified Fractions
// Link to the problem: https://leetcode.com/problems/simplified-fractions/
class Solution
{
public:
    vector<string> simplifiedFractions(int n)
    {
        set<string> a;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                int x = j, y = i;
                int z = __gcd(x, y);
                x /= z;
                y /= z;
                string b = to_string(x) + "/" + to_string(y);
                a.insert(b);
            }
        }
        vector<string> ans(a.begin(), a.end());
        return ans;
    }
};