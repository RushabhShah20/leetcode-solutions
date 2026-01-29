// Problem: Maximum Swap
// Link to the problem: https://leetcode.com/problems/maximum-swap/
class Solution
{
public:
    int maximumSwap(int num)
    {
        int ans = num;
        const string s = to_string(num);
        const int n = s.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string t = s;
                swap(t[i], t[j]);
                const int x = stoi(t);
                ans = max(ans, x);
            }
        }
        return ans;
    }
};