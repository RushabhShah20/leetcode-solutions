// Problem: Number of Equivalent Domino Pairs
// Link to the problem: https://leetcode.com/problems/number-of-equivalent-domino-pairs/
class Solution
{
public:
    int nc2(int n)
    {
        return (((n) * (n - 1)) / 2);
    }
    int numEquivDominoPairs(vector<vector<int>> &dominoes)
    {
        map<vector<int>, int> x;
        int ans = 0;
        for (int i = 0; i < dominoes.size(); i++)
        {
            if (dominoes[i][0] > dominoes[i][1])
            {
                x[{dominoes[i][1], dominoes[i][0]}]++;
            }
            else
            {
                x[{dominoes[i][0], dominoes[i][1]}]++;
            }
        }
        for (auto i : x)
        {
            ans += nc2(i.second);
        }
        return ans;
    }
};