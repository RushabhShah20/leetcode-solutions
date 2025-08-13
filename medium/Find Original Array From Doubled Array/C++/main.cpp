// Problem: Find Original Array From Doubled Array
// Link to the problem: https://leetcode.com/problems/find-original-array-from-doubled-array/
class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        if (changed.size() % 2 != 0)
        {
            return {};
        }
        map<int, int> x;
        for (int i = 0; i < changed.size(); i++)
        {
            x[changed[i]]++;
        }
        vector<int> ans;
        sort(changed.begin(), changed.end());
        for (int i = 0; i < changed.size(); i++)
        {
            if (x[changed[i]] == 0)
            {
                continue;
            }
            if (x[changed[i] * 2] == 0)
            {
                return {};
            }
            ans.push_back(changed[i]);
            x[changed[i]]--;
            x[changed[i] * 2]--;
        }
        return ans;
    }
};