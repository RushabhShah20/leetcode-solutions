// Problem: Count Rotations With Exactly K Equal Adjacent Pairs
// Link to the problem: https://leetcode.com/problems/count-rotations-with-exactly-k-equal-adjacent-pairs/
class Solution
{
public:
    int countRotations(string s, int k)
    {
        const int n = s.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[(i + 1) % n])
            {
                x++;
            }
        }
        const int ans = k == x ? n - x : (k == x - 1 ? x : 0);
        return ans;
    }
};