// Problem: Incremental Memory Leak
// Link to the problem: https://leetcode.com/problems/incremental-memory-leak/
class Solution
{
public:
    vector<int> memLeak(int memory1, int memory2)
    {
        vector<int> ans(3, 0);
        ans[1] = memory1, ans[2] = memory2;
        int i = 0;
        while (i <= ans[1] || i <= ans[2])
        {
            ans[0]++;
            if (ans[1] >= ans[2])
            {
                ans[1] -= i;
            }
            else
            {
                ans[2] -= i;
            }
            i++;
        }
        return ans;
    }
};