// Problem: Mirror Frequency Distance
// Link to the problem: https://leetcode.com/problems/mirror-frequency-distance/
class Solution
{
public:
    int mirrorFrequency(string s)
    {
        vector<int> a(26, 0), b(10, 0);
        for (const char c : s)
        {
            if (isdigit(c))
            {
                b[c - '0']++;
            }
            else
            {
                a[c - 'a']++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 13; i++)
        {
            ans += abs(a[i] - a[25 - i]);
        }
        for (int i = 0; i < 5; i++)
        {
            ans += abs(b[i] - b[9 - i]);
        }
        return ans;
    }
};