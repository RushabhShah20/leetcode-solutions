// Problem: Number of Visible People in a Queue
// Link to the problem: https://leetcode.com/problems/number-of-visible-people-in-a-queue/
class Solution
{
public:
    vector<int> canSeePersonsCount(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> ans(n, -1);
        stack<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            int count = 0;
            while (!s.empty() && heights[s.top()] < heights[i])
            {
                s.pop();
                count++;
            }
            if (!s.empty())
            {
                count++;
            }
            ans[i] = count;
            s.push(i);
        }
        return ans;
    }
};