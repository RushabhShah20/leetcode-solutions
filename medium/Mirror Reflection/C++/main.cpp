// Problem: Mirror Reflection
// Link to the problem: https://leetcode.com/problems/mirror-reflection/
class Solution
{
public:
    int gcd(const int a, const int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    int mirrorReflection(int p, int q)
    {
        const int k = gcd(p, q);
        p /= k;
        p &= 1;
        q /= k;
        q &= 1;
        const int ans = p == 1 && q == 1 ? 1 : (p == 1 ? 0 : 2);
        return ans;
    }
};