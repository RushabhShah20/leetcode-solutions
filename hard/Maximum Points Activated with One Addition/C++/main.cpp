// Problem: Maximum Points Activated with One Addition
// Link to the problem: https://leetcode.com/problems/maximum-points-activated-with-one-addition/
class DisjointSet
{
public:
    vector<int> parent, size;
    DisjointSet(const int n)
    {
        parent.resize(n);
        size.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find(const int node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = find(parent[node]);
    }

    bool unionBySize(const int u, const int v)
    {
        const int pu = find(u), pv = find(v);
        if (pu == pv)
        {
            return false;
        }
        if (size[pu] > size[pv])
        {
            size[pu] += size[pv];
            parent[pv] = pu;
        }
        else
        {
            size[pv] += size[pu];
            parent[pu] = pv;
        }
        return true;
    }
};

class Solution
{
public:
    int maxActivated(vector<vector<int>> &points)
    {
        const int n = points.size();
        DisjointSet dsu(n);
        map<int, int> x, y;
        for (int i = 0; i < n; i++)
        {
            if (x.count(points[i][0]) == 0)
            {
                x[points[i][0]] = i;
            }
            else
            {
                dsu.unionBySize(i, x[points[i][0]]);
            }
            if (y.count(points[i][1]) == 0)
            {
                y[points[i][1]] = i;
            }
            else
            {
                dsu.unionBySize(i, y[points[i][1]]);
            }
        }
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            if (dsu.parent[i] == i)
            {
                a.push_back(dsu.size[i]);
            }
        }
        sort(a.begin(), a.end(), greater<>());
        if (a.size() == 1)
        {
            return a[0] + 1;
        }
        return a[0] + a[1] + 1;
    }
};