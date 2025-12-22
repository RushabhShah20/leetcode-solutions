// Problem: Relocate Marbles
// Link to the problem: https://leetcode.com/problems/relocate-marbles/
class Solution
{
public:
    vector<int> relocateMarbles(vector<int> &nums, vector<int> &moveFrom, vector<int> &moveTo)
    {
        int n = moveFrom.size();
        map<int, bool> m;
        for (const int num : nums)
        {
            m[num] = true;
        }
        for (int i = 0; i < n; i++)
        {
            m[moveFrom[i]] = false;
            m[moveTo[i]] = true;
        }
        vector<int> ans;
        for (const pair<int, int> i : m)
        {
            if (i.second == true)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};