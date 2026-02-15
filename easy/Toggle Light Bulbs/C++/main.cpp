// Problem: Toggle Light Bulbs
// Link to the problem: https://leetcode.com/problems/toggle-light-bulbs/
class Solution
{
public:
    vector<int> toggleLightBulbs(vector<int> &bulbs)
    {
        map<int, int> m;
        for (const int bulb : bulbs)
        {
            m[bulb]++;
        }
        vector<int> ans;
        for (const pair<int, int> i : m)
        {
            if (i.second % 2 != 0)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};