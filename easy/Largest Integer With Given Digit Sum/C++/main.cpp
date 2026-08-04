// Problem: Largest Integer With Given Digit Sum
// Link to the problem: https://leetcode.com/problems/largest-integer-with-given-digit-sum/
class Solution
{
public:
    int largestInteger(int n, int s)
    {
        if (9 * n < s)
        {
            return -1;
        }
        string t(n, '0');
        for (int i = 0; i < n; i++)
        {
            if (s > 9)
            {
                t[i] = '9';
                s -= 9;
            }
            else
            {
                t[i] = '0' + s;
                break;
            }
        }
        const int ans = stoi(t);
        return ans;
    }
};