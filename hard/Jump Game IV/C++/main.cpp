// Problem: Jump Game IV
// Link to the problem: https://leetcode.com/problems/jump-game-iv/
class Solution
{
public:
    int minJumps(vector<int> &arr)
    {
        const int n = arr.size();
        if (n <= 1)
        {
            return 0;
        }
        unordered_map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]].push_back(i);
        }
        vector<int> a = {0};
        unordered_set<int> visited = {0};
        int ans = 0;
        while (!a.empty())
        {
            vector<int> b;
            for (const int i : a)
            {
                if (i == n - 1)
                {
                    return ans;
                }
                for (const int j : m[arr[i]])
                {
                    if (!visited.count(j))
                    {
                        visited.insert(j);
                        b.push_back(j);
                    }
                }
                m[arr[i]].clear();
                if (i + 1 < n && !visited.count(i + 1))
                {
                    visited.insert(i + 1);
                    b.push_back(i + 1);
                }
                if (i - 1 >= 0 && !visited.count(i - 1))
                {
                    visited.insert(i - 1);
                    b.push_back(i - 1);
                }
            }
            a = b;
            ans++;
        }
        return -1;
    }
};