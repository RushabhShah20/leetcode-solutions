// Problem: Minimum Number of People to Teach
// Link to the problem: https://leetcode.com/problems/minimum-number-of-people-to-teach/
class Solution
{
public:
    int minimumTeachings(int n, vector<vector<int>> &languages, vector<vector<int>> &friendships)
    {
        int m = languages.size();
        vector<bitset<501>> x(m);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < languages[i].size(); j++)
            {
                x[i][languages[i][j]] = 1;
            }
        }
        bitset<501> y;
        for (int i = 0; i < friendships.size(); i++)
        {
            int a = friendships[i][0] - 1, b = friendships[i][1] - 1;
            if ((x[a] & x[b]).any())
            {
                continue;
            }
            y[a] = 1;
            y[b] = 1;
        }
        if (y.count() == 0)
        {
            return 0;
        }
        int ans = INT_MAX;
        for (int j = 1; j <= n; j++)
        {
            int count = 0;
            for (int i = 0; i < m; i++)
            {
                if (y[i] & !x[i][j])
                {
                    count++;
                }
            }
            ans = min(ans, count);
        }
        return ans;
    }
};