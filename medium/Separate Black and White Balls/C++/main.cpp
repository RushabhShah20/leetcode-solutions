// Problem: Separate Black and White Balls
// Link to the problem: https://leetcode.com/problems/separate-black-and-white-balls/
class Solution
{
public:
    long long minimumSteps(string s)
    {
        long long ans = 0, countZero = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                countZero++;
            }
            else
            {
                ans += countZero;
            }
        }
        return ans;
    }
};