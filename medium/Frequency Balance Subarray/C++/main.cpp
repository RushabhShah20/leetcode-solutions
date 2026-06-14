// Problem: Frequency Balance Subarray
// Link to the problem: https://leetcode.com/problems/frequency-balance-subarray/
class Solution
{
public:
    int getLength(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            unordered_map<int, int> m, p;
            int mx = 0, a = 0;
            for (int j = i; j < n; j++)
            {
                const int x = nums[j], y = m[x];
                if (y > 0)
                {
                    p[y]--;
                }
                else
                {
                    a++;
                }
                const int b = y + 1;
                m[x] = b;
                p[b]++;
                if (b > mx)
                {
                    mx = b;
                }
                if (a == 1)
                {
                    ans = max(ans, j - i + 1);
                }
                else if (!(mx & 1))
                {
                    const int c = mx / 2;
                    if (p[c] > 0 && p[mx] + p[c] == a)
                    {
                        ans = max(ans, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};