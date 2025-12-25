// Problem: Remove Stones to Minimize the Total
// Link to the problem: https://leetcode.com/problems/remove-stones-to-minimize-the-total/
class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        int ans = 0;
        priority_queue<int> pq(piles.begin(), piles.end());
        for (int i = 0; i < k; i++)
        {
            int x = pq.top();
            pq.pop();
            pq.push((x % 2 == 0) ? (x / 2) : (((x / 2) + 1)));
        }
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};