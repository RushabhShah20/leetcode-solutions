// Problem: Greatest Sum Divisible by Three
// Link to the problem: https://leetcode.com/problems/greatest-sum-divisible-by-three/
class Solution
{
public:
    int maxSumDivThree(vector<int> &nums)
    {
        int ans = 0;
        map<int, vector<int>> m;
        for (const int num : nums)
        {
            ans += num;
            m[num % 3].push_back(num);
        }
        sort(m[1].begin(), m[1].end());
        sort(m[2].begin(), m[2].end());
        if (ans % 3 == 1)
        {
            if (m[1].size() == 0)
            {
                ans -= (m[2][0] + m[2][1]);
            }
            else
            {
                if (m[2].size() > 0)
                {
                    if (m[2].size() > 1)
                    {
                        ans -= min(m[2][0] + m[2][1], m[1][0]);
                    }
                    else
                    {
                        ans -= m[1][0];
                    }
                }
                else
                {
                    ans -= m[1][0];
                }
            }
            return ans;
        }
        else if (ans % 3 == 2)
        {
            if (m[2].size() == 0)
            {
                ans -= (m[1][0] + m[1][1]);
            }
            else
            {
                if (m[2].size() > 0)
                {
                    if (m[1].size() > 1)
                    {
                        ans -= min(m[1][0] + m[1][1], m[2][0]);
                    }
                    else
                    {
                        ans -= m[2][0];
                    }
                }
                else
                {
                    ans -= m[2][0];
                }
            }
            return ans;
        }
        else
        {
            return ans;
        }
    }
};