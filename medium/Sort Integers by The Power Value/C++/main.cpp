// Problem: Sort Integers by The Power Value
// Link to the problem: https://leetcode.com/problems/sort-integers-by-the-power-value/
class Solution
{
public:
    int getKth(int lo, int hi, int k)
    {
        map<int, vector<int>> x;
        for (int i = lo; i <= hi; i++)
        {
            int y = i, z = 0;
            while (y != 1)
            {
                if (y % 2 == 0)
                {
                    y /= 2;
                }
                else
                {
                    y = ((3 * y) + 1);
                }
                z++;
            }
            x[z].push_back(i);
        }
        vector<int> ans;
        for (auto i : x)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                ans.push_back(i.second[j]);
            }
        }
        return ans[k - 1];
    }
};