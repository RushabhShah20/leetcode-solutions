// Problem: Integers With Multiple Sum of Two Cubes
// Link to the problem: https://leetcode.com/problems/integers-with-multiple-sum-of-two-cubes/
class Solution
{
public:
    vector<int> findGoodIntegers(int n)
    {
        vector<int> ans;
        unordered_map<long long, int> m;
        for (long long i = 1; i * i * i <= n; i++)
        {
            for (long long j = i; j <= n; j++)
            {
                const long long x = (i * i * i) + (j * j * j);
                if (x > n)
                {
                    break;
                }
                m[x]++;
            }
        }
        for (const pair<long long, int> i : m)
        {
            if (i.second >= 2)
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};