// Problem: Jump Game VII
// Link to the problem: https://leetcode.com/problems/jump-game-vii/
class Solution
{
public:
    bool canReach(string s, int minJump, int maxJump)
    {
        const int n = s.size();
        vector<int> a(n, 0), b(n, 0);
        for (int i = 0; i < minJump && i < n; i++)
        {
            b[i] = 1;
        }
        for (int i = minJump; i < n; i++)
        {
            const int l = i - maxJump, r = i - minJump;
            if (s[i] == '0')
            {
                const int x = b[r] - (l <= 0 ? 0 : b[l - 1]);
                a[i] = x != 0 ? 1 : 0;
            }
            b[i] = b[i - 1] + a[i];
        }
        const bool ans = a[n - 1] == 1;
        return ans;
    }
};