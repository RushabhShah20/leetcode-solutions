// Problem: Number of Bit Changes to Make Two Integers Equal
// Link to the problem: https://leetcode.com/problems/number-of-bit-changes-to-make-two-integers-equal/
class Solution
{
public:
    int minChanges(int n, int k)
    {
        bitset<20> x(n), y(k);
        string a = x.to_string(), b = y.to_string();
        int ans = 0;
        for (int i = 0; i < 20; i++)
        {
            if (a[i] == '0' && b[i] == '1')
            {
                return -1;
            }
            else if (a[i] == '1' && b[i] == '0')
            {
                ans++;
            }
        }
        return ans;
    }
};