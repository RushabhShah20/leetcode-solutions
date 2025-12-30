// Problem: Maximum Product After K Increments
// Link to the problem: https://leetcode.com/problems/maximum-product-after-k-increments/
class Solution
{
public:
    int maximumProduct(vector<int> &nums, int k)
    {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
        while (k > 0)
        {
            long long x = pq.top();
            pq.pop();
            x++;
            pq.push(x);
            k--;
        }
        if (pq.top() == 0)
        {
            return 0;
        }
        else
        {
            long long ans = 1, mod = 1000000007;
            while (!pq.empty())
            {
                ans = ((ans * pq.top()) % mod);
                pq.pop();
            }
            return ans;
        }
    }
};