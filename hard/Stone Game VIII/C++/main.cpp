// Problem: Stone Game VIII
// Link to the problem: https://leetcode.com/problems/stone-game-viii/
class Solution
{
public:
    int stoneGameVIII(vector<int> &stones)
    {
        const int n = stones.size();
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = i == 0 ? stones[i] : a[i - 1] + stones[i];
        }
        vector<int> b(n);
        b[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 1; i--)
        {
            b[i] = max(b[i + 1], a[i] - b[i + 1]);
        }
        const int ans = b[1];
        return ans;
    }
};