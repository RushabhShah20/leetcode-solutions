// Problem: K Closest Points to Origin
// Link to the problem: https://leetcode.com/problems/k-closest-points-to-origin/
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        vector<vector<int>> ans;
        map<unsigned long long, vector<vector<int>>> x;
        for (int i = 0; i < points.size(); i++)
        {
            unsigned long long a = pow(points[i][0], 2), b = pow(points[i][1], 2);
            unsigned long long y = a + b;
            x[y].push_back({points[i][0], points[i][1]});
        }
        vector<vector<int>> z;
        for (auto i : x)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                z.push_back(i.second[j]);
            }
        }
        for (int i = 0; i < k; i++)
        {
            ans.push_back(z[i]);
        }
        return ans;
    }
};