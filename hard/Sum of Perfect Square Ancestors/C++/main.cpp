// Problem: Sum of Perfect Square Ancestors
// Link to the problem: https://leetcode.com/problems/sum-of-perfect-square-ancestors/
class Solution
{
public:
    long long getSignature(int num)
    {
        long long sig = 1;
        int count = 0;
        while (num % 2 == 0)
        {
            count++;
            num /= 2;
        }
        if (count % 2 == 1)
        {
            sig *= 2;
        }
        for (int i = 3; i * i <= num; i += 2)
        {
            count = 0;
            while (num % i == 0)
            {
                count++;
                num /= i;
            }
            if (count % 2 == 1)
                sig *= i;
        }
        if (num > 1)
        {
            sig *= num;
        }
        return sig;
    }
    void dfs(int node, int parent, vector<vector<int>> &adj, vector<int> &nums, vector<long long> &signatures, map<long long, int> &pathCount, long long &ans)
    {
        long long sig = signatures[node];
        if (pathCount.count(sig))
        {
            ans += pathCount[sig];
        }
        pathCount[sig]++;
        for (int child : adj[node])
        {
            if (child != parent)
            {
                dfs(child, node, adj, nums, signatures, pathCount, ans);
            }
        }
        pathCount[sig]--;
        if (pathCount[sig] == 0)
        {
            pathCount.erase(sig);
        }
    }
    long long sumOfAncestors(int n, vector<vector<int>> &edges, vector<int> &nums)
    {
        vector<vector<int>> adj(n);
        for (auto &e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<long long> signatures(n);
        for (int i = 0; i < n; i++)
        {
            signatures[i] = getSignature(nums[i]);
        }
        map<long long, int> pathCount;
        long long ans = 0;
        dfs(0, -1, adj, nums, signatures, pathCount, ans);
        return ans;
    }
};