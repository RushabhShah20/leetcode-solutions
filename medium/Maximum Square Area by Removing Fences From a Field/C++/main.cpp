// Problem: Maximum Square Area by Removing Fences From a Field
// Link to the problem: https://leetcode.com/problems/maximum-square-area-by-removing-fences-from-a-field/
class Solution
{
public:
    unordered_set<int> getEdges(vector<int> &fences, int border)
    {
        fences.push_back(1);
        fences.push_back(border);
        sort(fences.begin(), fences.end());
        const int n = fences.size();
        unordered_set<int> edges;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                edges.insert(fences[j] - fences[i]);
            }
        }
        return edges;
    }
    int maximizeSquareArea(int m, int n, vector<int> &hFences, vector<int> &vFences)
    {
        const int mod = 1000000007;
        long long ans = -1;
        unordered_set<int> hEdges = getEdges(hFences, m), vEdges = getEdges(vFences, n);
        for (const int &i : hEdges)
        {
            if (vEdges.count(i))
            {
                ans = max(ans, ((long long)(i) * (long long)(i)));
            }
        }
        if (ans == -1)
        {
            return -1;
        }
        else
        {
            ans %= mod;
            return ans;
        }
    }
};