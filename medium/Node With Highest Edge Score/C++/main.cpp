// Problem: Node With Highest Edge Score
// Link to the problem: https://leetcode.com/problems/node-with-highest-edge-score/
class Solution
{
public:
    int edgeScore(vector<int> &edges)
    {
        int n = edges.size();
        vector<long long> sum(n, 0);
        for (int i = 0; i < n; i++)
        {
            sum[edges[i]] += i;
        }
        long long maxSum = 0;
        for (const long long &i : sum)
        {
            maxSum = max(maxSum, i);
        }
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (sum[i] == maxSum)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};