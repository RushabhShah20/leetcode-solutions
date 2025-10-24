// Problem: Minimum Number of Vertices to Reach All Nodes
// Link to the problem: https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/
class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<bool> a(n, false);
        for (vector<int> edge : edges)
        {
            a[edge[1]] = true;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == false)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};