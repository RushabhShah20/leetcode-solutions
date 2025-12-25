// Problem: Maximal Score After Applying K Operations
// Link to the problem: https://leetcode.com/problems/maximal-score-after-applying-k-operations/
class Solution
{
public:
    long long maxKelements(vector<int> &nums, int k)
    {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            int x = pq.top();
            pq.pop();
            ans += x;
            if (x % 3 == 0)
            {
                pq.push(x / 3);
            }
            else
            {
                pq.push((x / 3) + 1);
            }
        }
        return ans;
    }
};