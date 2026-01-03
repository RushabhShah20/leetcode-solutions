// Problem: Minimum Operations to Halve Array Sum
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-halve-array-sum/
class Solution
{
public:
    int halveArray(vector<int> &nums)
    {
        double sum = 0;
        priority_queue<double> pq;
        for (const int &num : nums)
        {
            sum += num;
            pq.push((double)(num));
        }
        int ans = 0;
        double total = sum;
        while (2 * total > sum)
        {
            double x = pq.top();
            pq.pop();
            total -= (x / 2);
            pq.push(x / 2);
            ans++;
        }
        return ans;
    }
};